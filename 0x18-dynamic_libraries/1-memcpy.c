#include "main.h"

/*
 * _memcpy - Copies memory area
 *
 * @dest: Pointer to the destination memory
 * @src: Pointer to the source memory
 * @n: The number of bytes to copy
 *
 * Return: Pointer to the destination memory with n bytes copied from the source memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;

for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
