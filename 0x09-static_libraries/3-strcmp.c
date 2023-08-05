#include "main.h"

/**
 * _strcmp - Compares two strings.
 *
 * @s1: First input string.
 * @s2: Second input string.
 *
 * Return: An integer less than, equal to, or greater than zero if the
 * first string is found to be less than, equal to, or greater
 * than the second string, respectively.
 */

int _strcmp(const char *s1, const char *s2)
{
int r = 0;

while (s1[r] != '\0' && s2[r] != '\0')
{
if (s1[r] != s2[r])
{
return (s1[r] - s2[r]);
}
r++;
}

return (0);
}
