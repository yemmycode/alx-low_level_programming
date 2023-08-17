#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - Searches for an integer in an array
* using a comparison function.
* @array: The array of integers to search.
* @size: The number of elements in the array.
* @cmp: A pointer to the comparison function to be used.
*
* Return: The index of the first element for which the cmp
* function does not return 0,
* or -1 if no element matches or if size is non-positive.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (array == NULL || cmp == NULL || size <= 0)
return (-1);

while (i < size)
{
if (cmp(array[i]) != 0)
return (i);

i++;
}

return (-1);
}
