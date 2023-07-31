#include "main.h"

/**
 * _memset - this fills the memory with a constant byte
 * @s: the memory area to fill
 * @b: the character to be copied
 * @n: the number of times to copy the character
 * Return: the pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}

return s;
}
