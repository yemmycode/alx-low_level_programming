#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - Prints each element of an array on a newline.
* @array: The array containing elements.
* @size: The number of elements to be printed.
* @action: The function pointer to be applied to each element.
*
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (NULL == array || NULL == action)
return;

for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
