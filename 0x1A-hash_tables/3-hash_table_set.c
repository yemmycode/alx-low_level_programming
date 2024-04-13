#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to which the element is to be added
 * @key: the key associated with the element
 * @value: the value associated with the key
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    char *copy_of_value, *copy_of_key;
    hash_node_t *current_node, *new_element;

    if (!ht || !key || !(*key) || !value)
        return (0);

    copy_of_value = strdup(value);
    if (!copy_of_value)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    current_node = ht->array[index];

    while (current_node)
    {
        if (!strcmp(key, current_node->key))
        {
            free(current_node->value);
            current_node->value = copy_of_value;
            return (1);
        }
        current_node = current_node->next;
    }

    new_element = calloc(1, sizeof(hash_node_t));
    if (!new_element)
    {
        free(copy_of_value);
        return (0);
    }

    copy_of_key = strdup(key);
    if (!copy_of_key)
    {
        free(copy_of_value);
        free(new_element);
        return (0);
    }

    new_element->key = copy_of_key;
    new_element->value = copy_of_value;
    new_element->next = ht->array[index];
    ht->array[index] = new_element;

    return (1);
}
