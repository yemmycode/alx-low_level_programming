#include "main.h"

/**
 * _strchr - Locates the first occurrence of a 
 * character in a string.
 *
 * @s: The input string to search.
 * @c: The character to find in the string.
 *
 * Return: Pointer to the first occurrence of the 
 * character in the string,
 * or 0 if the character is not found.
 */


char *_strchr(const char *s, char c)
{
int t = 0;

for (; s[t] >= '\0'; t++)
{
if (s[t] == c)
return (&s[t]);
}
return (0);
}
