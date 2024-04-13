#include "hash_tables.h"

/**
 * hash_table_print - outputs the key and value pairs from the hash table
 * @ht: the hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int index = 0;
    hash_node_t *node;
    int comma_flag = 0;

    if (!ht)
        return;

    printf("{");
    for (index = 0; index < ht->size; index++)
    {
        node = ht->array[index];
        while (node)
        {
            if (comma_flag)
                printf(", ");
            printf("'%s': '%s'", node->key, node->value);
            comma_flag = 1; 
            node = node->next;
        }
    }
    printf("}\n");
}
