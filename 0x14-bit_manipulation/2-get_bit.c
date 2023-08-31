#include "main.h"

/**
* get_bit - this returns the value of a bit at a given index.
* @n: The number to be checked.
* @index: The index of the bit, starting from 0.
* Return: value of the bit at the given index or -1 if an error occurred.
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask = 1 << index;



if (index >= 8 * sizeof(n))

return (-1);


if (n & mask)
return (1);


return (0);
}
