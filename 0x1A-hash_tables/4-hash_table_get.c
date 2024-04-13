#include "hash_tables.h"

/**
 * hash_table_get - retrieves the value associated with a given key in the hash table
 * @ht: the hash table from which to retrieve the value
 * @key: the key whose value is to be retrieved
 *
 * Return: the associated value, or NULL if the key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int position;
    hash_node_t *node;

    if (!ht || !key || !(*key))
        return (NULL);

    position = key_index((const unsigned char *)key, ht->size);
    node = ht->array[position];

    while (node)
    {
        if (!strcmp(key, node->key))
            return (node->value);
        node = node->next;
    }

    return (NULL);
}
