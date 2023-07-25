#include "main.h"

/**
 * _strcpy - This copies the string
 * @dest: The value of destination
 * @src: the source value
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}
