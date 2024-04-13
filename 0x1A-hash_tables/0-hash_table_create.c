#include "hash_tables.h"

/**
 * createHashTable - creates a hash table
 * @size: size of the hash table
 *
 * Return: pointer to hash table
 */
HashTable *createHashTable(unsigned long int size)
{
    HashTable *ht;
    
    if (size == 0)
        return NULL;
    
    ht = calloc(1, sizeof(HashTable));
    if (ht == NULL)
        return (NULL);
    
    ht->size = size;
    ht->table = calloc(size, sizeof(KeyValue *));
    if (ht->table == NULL)
    {
        free(ht);
        return (NULL);
    }
    
    return (ht);
}
