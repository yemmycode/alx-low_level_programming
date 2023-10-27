#include "main.h"

/**
 *This function converts a binary number to an unsigned int.
 *Parameters: b - a pointer to a string of 0 and 1 chars
 *Return: the converted number, or 0 if b is NULL or contains invalid chars
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
int i = 0;

if (!b || *b == '\0')

return (0);

while (b[i] != '\0')
{

if (b[i] != '0' && b[i] != '1')
return (0);

num = num << 1;
num = num + (int)(b[i] - '0');
i++;
}
return (num);
}
