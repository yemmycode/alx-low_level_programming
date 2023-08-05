#include "main.h"

/**
 * _atoi - Converts a string into an integer.
 *
 * @s: The string to convert.
 *
 * Return: The converted integer value.
 */

int _atoi(char *a)
{
int sig = 1, i = 0;
unsigned int unsig = 0;

while (!(s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
{
if (s[i] == '-')
sig *= -1;
i++;
}
while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
{
unsig = (unsig * 10) + (s[i] - '0');
i++;
}
unsig *= sig;
return (unsig);
}
