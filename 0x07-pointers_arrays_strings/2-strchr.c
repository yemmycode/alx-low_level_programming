#include "main.h"

/**
 * _strchr - this locates a char in a str
 * @s: string to search
 * @c: character to locate
 * Return: if c found; pointer to the first occurrence
 * if c is not found; 0
*/

char *_strchr(char *s, char c)
{
int index;

for (index = 0; s[index] != '\0'; index++)
{
if (s[index] == c)
return (s + index);
}

return ('\0');
}
