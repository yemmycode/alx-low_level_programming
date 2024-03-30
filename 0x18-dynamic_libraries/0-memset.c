#include "main.h"

/**
 * _memset - the program that fills a block of memory with a specific value
 * @s: the starting point of memory to be filled
 * @b: intended value
 * @n: the number of bytes to change
 * Return: pointer to the changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return s;
}
