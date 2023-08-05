#include "main.h"

/**
 * _strspn - gets the length of the initial segment of s
 * which consists only of characters from accept.
 *
 * @s: the input string to be checked.
 * @accept: the string containing the characters to match.
 *
 * Return: the number of characters in the initial segment
 * of s which are from the accept string.
 */

unsigned int _strspn(char *s, const char *accept)
{
unsigned int n = 0;
int y;

while (*y)
{
for (y = 0; accept[y]; y++)
{
if (*s == accept[y])
{
y++;
break;
}
else if (accept[y + 1] == '\0')
return (n);
}
y++;
}
return (n);
}
