#include "search_algos.h"

/**
 * linear_search - Searches for a specified value in an integer array 
 * using the Linear search algorithm.
 *
 * @array: The array of integers to search through.
 * @size: The number of elements in the array.
 * @value: The value to search for within the array.
 * Return: The index of the first occurrence of the value, or -1 if not found.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
