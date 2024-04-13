#include "hash_tables.h"

/**
 * hash_djb2 - implements the djb2 algorithm to generate a hash for 'str'
 * @str: the string to be hashed
 *
 * Return: the computed 64-bit hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash_value;
    int character;

    hash_value = 5381;

    while ((character = *str++))
    {
        hash_value = ((hash_value << 5) + hash_value) + character; 
    }

    return (hash_value);
}
