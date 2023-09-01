#include "main.h"

/**
* set_bit - Set the value of a bit to 1 at a given index.
* @n: Pointer to the number to be modified.
* @index: Index of the bit, starting from 0.
* Return: 1 if the operation is successful, or -1 if an error occurred.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1UL << index;


if (!n || index >= 8 * sizeof(*n))

return (-1);


*n = *n | mask;


return (1);
}
