#include <stdio.h>

/**
* flip_bits - this returns the number of bits you would need to
* flip to get from one number to another
* @n: this is the first number
* @m: this is the second number
* Returns: the number of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;

unsigned int count = 0;


while (xor_result > 0)
{

if (xor_result & 1)
count++;


xor_result = xor_result >> 1;
}


return (count);
}
