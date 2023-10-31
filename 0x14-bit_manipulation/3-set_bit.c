#include "main.h"

/**
* set_bit - A function that sets the value of a bit to 1 at a given index
* @n: a pointer to the number whose bit value is to be set
* @index: the position of the bit, starting from 0 (least significant bit)
* Return: 1 if successful, or -1 if an error occurs
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;

if (index >= sizeof(*n) * 8)
{
return (-1);
}

mask = 1UL << index;
*n = *n | mask;

return (1);
}
