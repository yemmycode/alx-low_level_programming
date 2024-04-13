#include "hash_tables.h"

/**
 * hash_table_delete - deallocates memory used by the hash table and its nodes
 * @ht: the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *current_node, *node_to_free;
    unsigned long int index = 0;

    if (!ht)
        return;

    for (index = 0; index < ht->size; index++)
    {
        current_node = ht->array[index];
        while (current_node)
        {
            node_to_free = current_node;
            current_node = current_node->next;
            if (node_to_free->key)
                free(node_to_free->key);
            if (node_to_free->value)
                free(node_to_free->value);
            free(node_to_free);
        }
    }
    free(ht->array);
    free(ht);
}
