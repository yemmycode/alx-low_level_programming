#include "main.h"

/**
 * reverse_array - the function that reverses the content of an array of integers
 * @a: pointer to an array
 * @n: the number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int temporary, counter;
n = n - 1;
counter = 0;

while (counter <= n)
{
temporary = a[counter];
a[counter] = a[n];
a[n] = temporary;
counter++;
n--;
}
}
