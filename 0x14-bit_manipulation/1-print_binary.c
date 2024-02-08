#include "main.h"

/**
* print_binary: this prints the binary representation of number
* @n: this is the dsecimal input
* return: null
*/
void print_binary(unsigned long int n)
{
if (n == 0)
return;
print_binary(n >> 1);
if ((n & 1) == 1)
_putchar('1');
if (!(n & 1))
_putchar('0');
}

/**
* print_binary: this prints out the binary
* @n: the decimal to be converted accordingly
* return: null
*/

void print_bin(unsigned long int n)
{
if (n == 0)
_putchar('0');
else
{
print_binary(n);
}
}
