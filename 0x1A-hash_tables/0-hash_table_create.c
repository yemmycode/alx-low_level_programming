#include "hash_tables.h"

/**
 * hash_table_create - initializes a new hash table
 * @size: the number of elements in the hash table
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_table;

    if (size == 0)
        return (NULL);

    new_table = calloc(1, sizeof(hash_table_t));
    if (new_table == NULL) 
        return (NULL);

    new_table->size = size;

    new_table->array = calloc(size, sizeof(hash_node_t *));
    if (new_table->array == NULL) 
    {
        free(new_table); 
        return (NULL);
    }

    return (new_table); 
}
