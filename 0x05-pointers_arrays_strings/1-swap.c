#include <stdio.h>

/**
 * swap_int - This swaps the value of integers
 * @a: first integer to swap
 * @b: second integer to swap
 * Return: 0
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
