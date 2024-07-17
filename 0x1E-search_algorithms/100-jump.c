#include "search_algos.h"
#include <math.h>

/* Note: To compile with math.h, use gcc with the `-lm` flag */

size_t min(size_t a, size_t b);

/**
 * min - Returns the lesser of two size_t values
 * @a: First value
 * @b: Second value
 *
 * Return: `a` if it is less than or equal to `b`, otherwise `b`
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * jump_search - Searches for a value in a sorted array of integers using
 * the jump search algorithm
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index containing `value`, or -1 if `value` is not found or
 * `array` is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low = 0, high = 0, step;

	if (!array || size == 0)
		return (-1);

	step = sqrt(size);

	while (high < size && array[high] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", high, array[high]);
		low = high;
		high += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	for (; low <= min(high, size - 1); low++)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
	}

	return (-1);
}
