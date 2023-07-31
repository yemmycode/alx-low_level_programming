#include "main.h"

/**
 * _strstr - this locates a substring
 * @haystack: string to search
 * @needle: substring to locate
 * Return: if substring located - a pointer
 * to beginning of the located substring
 * if substring not located - 0.
 */

char *_strstr(char *haystack, char *needle)
{
int index;

if (*needle == '\0')
return haystack;

while (*haystack)
{
index = 0;

while (haystack[index] == needle[index])
{
if (needle[index + 1] == '\0')
return haystack;

index++;
}

haystack++;
}

return ('\0');
}
