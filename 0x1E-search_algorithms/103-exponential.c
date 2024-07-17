#include "search_algos.h"

int binary_search_helper(int *array, int value, size_t low, size_t high);
size_t min(size_t a, size_t b);

/**
 * min - returns the smaller of two size_t values
 * @a: first value
 * @b: second value
 *
 * Return: `a` if less than or equal to `b`, otherwise `b`
 */
size_t min(size_t a, size_t b)
{
    return (a <= b ? a : b);
}

/**
 * binary_search_helper - performs binary search for a value in an integer array,
 * not guaranteed to return the first occurrence if `value` appears more than once
 * @array: pointer to the first element of the array to search
 * @value: value to search for
 * @low: starting index
 * @high: ending index
 *
 * Return: index of `value`, or -1 if `value` is not found or `array` is NULL
 */
int binary_search_helper(int *array, int value, size_t low, size_t high)
{
    size_t mid, i;

    if (!array)
        return -1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        printf("Searching in array: ");
        for (i = low; i <= high; i++)
            printf("%d%s", array[i], i == high ? "\n" : ", ");
        if (array[mid] < value)
            low = mid + 1;
        else if (array[mid] > value)
            high = mid - 1;
        else
            return mid;
    }

    return -1;
}

/**
 * exponential_search - performs exponential search for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` is not found or `array` is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t low, high, bound = 1;

    if (!array || size == 0)
        return -1;

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", (unsigned long)bound, array[bound]);
        bound *= 2;
    }

    low = bound / 2;
    high = min(bound, size - 1);
    printf("Value found between indexes [%lu] and [%lu]\n", (unsigned long)low, (unsigned long)high);
    return binary_search_helper(array, value, low, high);
}

