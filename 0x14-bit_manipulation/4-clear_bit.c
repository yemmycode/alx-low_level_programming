#include <stdio.h>

/**
* clear_bit - this sets the value of a bit to 0 at a given index
* @n: the pointer to the number to be modified
* @index: the index of the bit, starting from 0
* Returns: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = ~(1UL << index);


if (!n || index > 8 * sizeof(*n) - 1)

return (-1);


*n &= mask;



return (1);
}
