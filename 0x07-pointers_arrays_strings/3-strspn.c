#include "main.h"

/**
 * _strspn - this gets the length of a prefix substring
 * @s: the string to search
 * @accept: prefix to measure
 * Return: number of bytes in s that consist of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int bytes = 0;
int index;

for (; *s; s++)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
{
bytes++;
break;
}
else if (accept[index + 1] == '\0')
return (bytes);
}
}

return (bytes);
}
