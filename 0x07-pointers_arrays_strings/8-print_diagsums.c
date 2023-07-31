#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - this prints the sum of two diagonals
 * of square matrix of integers
 * @a: matrix of integers
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
int index, sum1 = 0, sum2 = 0;

for (index = 0; index < size; index++)
{
sum1 += a[index * size + index];
}

for (index = 0; index < size; index++)
{
sum2 += a[index * size + (size - 1 - index)];
}

printf("%d, %d\n", sum1, sum2);
}
