#include "main.h"

/**
 * _strstr - locates a substring.
 *
 * @haystack: the input string to search in.
 * @needle: the substring to find.
 *
 * Return: Pointer to the first occurrence of the substring `needle`
 * in the string `haystack`, or NULL if `needle` is not found.
 */

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *y = haystack;
char *z = needle;

while (*y == *z && *z != '\0')
{
y++;
z++;
}
if (*z == '\0')
return (haystack);
}
return (0);
}
