#include <stdlib.h>
#include "main.h"

/**
* _memset - Fills a memory area with a given byte
* @s: Pointer to the memory area
* @b: Byte to fill with
* @n: Number of bytes to fill
* Return: Pointer to the filled memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}

/**
* _calloc - Allocates memory for an array and initializes with zeros
* @nmemb: Number of elements in the array
* @size: Size of each element
* Return: Pointer to allocated memory, or NULL on failure
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;

if (nmemb == 0 && size == 0)
return (NULL);

ptr = (char *)malloc(size * nmemb);

if (!ptr)
return (NULL);

_memset(ptr, 0, nmemb * size);

return (ptr);
}
