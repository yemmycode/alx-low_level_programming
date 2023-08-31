#include "main.h"
#include <stdio.h>

/**
* print_binary - Display the binary representation of a given number.
* @n: The number for which the binary representation is displayed.
*
* This function prints each individual bit of the number @n on a separate line,
* starting from the most significant bit.
*/
void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL << (8 * sizeof(n) - 1);
int flag = 0;


while (mask > 0)
{
if (n & mask)
{
printf("1\n");
flag = 1;
}
else
{
if (flag)
printf("0\n");
}

mask = mask >> 1;
}
}
