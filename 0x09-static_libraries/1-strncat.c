#include "main.h"

/**
 * _strncat - concatenates two strings, using at most 
 *n bytes from the source.
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to concatenate
 * Return: pointer to the destination string
 */

char *_strncat(char *dest, const char *src, int n)
{
int c, d;

c = 0;
while (dest[c] != '\0')
{
c++;
}
d = 0;
while (d < n && src[d] != '\0')
{
dest[c] = src[d];
c++;
d++;
}
dest[c] = '\0';
return (dest);
}
