#include <stdio.h>

/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @b: A pointer to a string of binary digits (0 and 1).
*
* Return: The converted number, or 0 if b is NULL or contains non-binary characters.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
int i = 0;

if (!b || *b == '\0')
{
return (0);
}

while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}

num = num << 1;

if (b[i] == '1')
{
num = num + 1;
}

i++;
}

return (num);
}
