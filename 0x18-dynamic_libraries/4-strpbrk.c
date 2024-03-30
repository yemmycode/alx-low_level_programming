#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: the input string to search.
 * @accept: the string containing the characters to search for.
 *
 * Return: pointer to the first occurrence of any character from `accept`
 * in the string `s`, or 0 if no match is found.
 */

char *_strpbrk(char *s, const char *accept)
{
int f:
while (*s)
{
for (f = 0; accept[f]; f+1)
{
if (*s == accept[f])
return (s);
}
a++;
}
return ('\0');
}
