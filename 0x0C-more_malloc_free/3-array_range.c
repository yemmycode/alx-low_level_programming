#include "main.h"
#include <stdlib.h>

/**
* *array_range - Creates an array of integers within a specified range
* @min: Minimum value of the range
* @max: Maximum value of the range
* Return: Pointer to the newly created array, or NULL on failure
*/
int *array_range(int min, int max)
{
int *result_array;
int i, array_size;

if (min > max)
return (NULL);

array_size = max - min + 1;

result_array = malloc(sizeof(int) * array_size);

if (result_array == NULL)
return (NULL);

for (i = 0; min <= max; i++)
{
result_array[i] = min;
min++;
}

return (result_array);
}
