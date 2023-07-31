#include "main.h"

/**
 * _memcpy - the function that copies @n bytes from memory area 
 * @src to the memory area @dest
 * @n: the number of bytes to copy
 * @src: the bytes from the memory area
 * @dest: the memory area
 * Return: pointer to @dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

if (n == 0)
return dest;

do
{
dest[i] = src[i];
i++;
} while (i < n);

return (dest);
}
