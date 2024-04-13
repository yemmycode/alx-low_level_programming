#include "hash_tables.h"

/**
 * key_index - calculates the index for a given key
 * @key: the key (string) to be hashed
 * @size: the array size of the hash table
 *
 * Return: the computed index for 'key' using the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}
