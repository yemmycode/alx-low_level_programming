#include "main.h"

/**
 * _strncpy - copies a string up to n characters.
 *
 * @dest: destination buffer to store the copied string.
 * @src: source string to be copied.
 * @n: maximum number of characters to copy from the source.
 *
 * Return: pointer to the destination buffer
 */

char *_strncpy(dest, char *src, int n)
{
int w = 0;
while (w < n && src[w] != '\0')
{
dest[w] = src[w];
w++;
}
while (w < n)
{
dest[w] = '\0';
w++;
}
return (dest);
}
