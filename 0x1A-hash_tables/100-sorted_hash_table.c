#include "hash_tables.h"

/**
 * sorted_list - inserts a new node into a sorted hash table
 * @ht: pointer to the sorted hash table
 * @new_node: new node to be inserted
 */
void sorted_list(shash_table_t *ht, shash_node_t *new_node)
{
    shash_node_t *current = ht->shead;

    if (!current)
    {
        ht->shead = new_node;
        ht->stail = new_node;
        new_node->snext = NULL;
        new_node->sprev = NULL;
        return;
    }

    while (current)
    {
        if (strcmp(new_node->key, current->key) < 0)
        {
            new_node->snext = current;
            new_node->sprev = current->sprev;

            if (current->sprev == NULL)
                ht->shead = new_node;
            else
                current->sprev->snext = new_node;

            current->sprev = new_node;
            return;
        }

        if (current->snext == NULL)
        {
            new_node->sprev = current;
            new_node->snext = NULL;
            current->snext = new_node;
            ht->stail = new_node;
            return;
        }

        current = current->snext;
    }
}

/**
 * shash_table_create - creates a new sorted hash table
 * @size: the size of the hash table to create
 *
 * Return: a pointer to the new hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *new_table;

    if (size == 0)
        return (NULL);

    new_table = calloc(1, sizeof(shash_table_t));
    if (!new_table)
        return (NULL);

    new_table->size = size;
    new_table->array = calloc(size, sizeof(shash_node_t *));
    if (!new_table->array)
    {
        free(new_table);
        return (NULL);
    }

    return (new_table);
}

/**
 * shash_table_set - adds an element to a sorted hash table
 * @ht: pointer to the sorted hash table
 * @key: the key associated with the element
 * @value: the value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    char *value_dup, *key_dup;
    shash_node_t *node, *new_element;

    if (!ht || !key || !(*key) || !value)
        return (0);

    value_dup = strdup(value);
    if (!value_dup)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    node = ht->array[index];

    while (node)
    {
        if (!strcmp(key, node->key))
        {
            free(node->value);
            node->value = value_dup;
            return (1);
        }
        node = node->next;
    }

    new_element = calloc(1, sizeof(shash_node_t));
    if (!new_element)
    {
        free(value_dup);
        return (0);
    }

    key_dup = strdup(key);
    if (!key_dup)
    {
        free(value_dup);
        free(new_element);
        return (0);
    }

    new_element->key = key_dup;
    new_element->value = value_dup;
    new_element->next = ht->array[index];
    ht->array[index] = new_element;
    sorted_list(ht, new_element);

    return (1);
}

/**
 * shash_table_get - retrieves the value associated with a key in a sorted hash table
 * @ht: pointer to the hash table
 * @key: the key whose value is to be retrieved
 *
 * Return: the value associated with the key, or NULL if the key does not exist
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int index;
    shash_node_t *node;

    if (!ht || !key || !(*key))
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);
    node = ht->array[index];

    while (node)
    {
        if (!strcmp(key, node->key))
            return (node->value);
        node = node->next;
    }

    return (NULL);
}

/**
 * shash_table_print - prints all key:value pairs from a sorted hash table
 * @ht: pointer to the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *node;
    int flag = 0;

    if (!ht)
        return;

    node = ht->shead;
    printf("{");
    while (node)
    {
        if (flag)
            printf(", ");
        printf("'%s': '%s'", node->key, node->value);
        flag = 1;
        node = node->snext;
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - prints all key:value pairs from a sorted hash table in reverse order
 * @ht: pointer to the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *node;
    int flag = 0;

    if (!ht)
        return;

    node = ht->stail;
    printf("{");
    while (node)
    {
        if (flag)
            printf(", ");
        printf("'%s': '%s'", node->key, node->value);
        flag = 1;
        node = node->sprev;
    }
    printf("}\n");
}

/**
 * shash_table_delete - frees a sorted hash table and all its nodes
 * @ht: pointer to the hash table
 */
void shash_table_delete(shash_table_t *ht)
{
    shash_node_t *current_node, *node_to_free;
    unsigned long int index;

    if (!ht)
        return;

    for (index = 0; index < ht->size; index++)
    {
        current_node = ht->array[index];
        while (current_node)
        {
            node_to_free = current_node;
            current_node = current_node->next;
            free(node_to_free->key);
            free(node_to_free->value);
            free(node_to_free);
        }
    }
    free(ht->array);
    free(ht);
}
