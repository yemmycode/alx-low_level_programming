#include "main.h"

/**
 * _strpbrk - searches string for a set of bytes
 * @s: string to search
 * @accept: sets of bytes to search for
 * Return: if set matched - a pointer to matched byte
 * if set not matched - 0
 */

char *_strpbrk(char *s, char *accept)
{
int index;

do
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
return s;
}
s++;
} while (*s);

return ('\0');
}
