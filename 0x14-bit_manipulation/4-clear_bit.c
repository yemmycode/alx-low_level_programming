#include "main.h"

/**
* clear_bit: this sets the value of a bit to 0 at a given index
* @n: this is a pointer to the number
* @index: index of the bit to clear, starting from 0
* Return: 1 if it successful, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;


if (index >= sizeof(unsigned long int) * 8)
return (-1);


mask = 1UL << index;


mask = ~mask;


*n = *n & mask;

return (1);
}
