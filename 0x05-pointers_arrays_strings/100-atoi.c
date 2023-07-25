#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: pointer to convert
 * Return: an integer
 */

int _atoi(char *s)
{
int c = 0;
int num = 0;
int sign = 1;
int is_number = 0;

while (s[c])
{
if (s[c] == '-')
        {
sign *= -1;
}
while (s[c] >= '0' && s[c] <= '9')
{
is_number = 1;
num = (num * 10) + (s[c] - '0');
c++;
}
if (is_number == 1)
{
break;
}
c++;
}

return num * sign;
}
