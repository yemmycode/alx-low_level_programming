#include "main.h"

/**
 * _strncpy - this copies an inputted number
 * of bytes from the string src to dest
 * @dest: buffer storing the string copy
 * @src: source string
 * @n: maximum number of bytes to be copied from
 * source
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int index;

for (index = 0; index < n && src[index] != '\0'; index++)
{
dest[index] = src[index];
}

for (; index < n; index++)
{
dest[index] = '\0';
}

return dest;
}
