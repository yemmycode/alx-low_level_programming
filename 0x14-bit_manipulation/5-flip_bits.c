#include "main.h"

/**
* flip_bits - this returns the number of bits you would need to flip
* to get from one number to another
* @n: this is the first number
* @m: the second number
* Return: number of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor;
unsigned int count;


xor = n ^ m;


count = 0;


while (xor)
{

count += xor & 1;


xor >>= 1;
}

return (count);
}
