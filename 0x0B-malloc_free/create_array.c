#include "main.h"
#include <stdlib.h>

/**
 * create_array - this creates the array
 * @size: the size of the array
 * @c: the char to get stored in the array
 * Return: the pointer to the array
 */

char *create_array(unsigned int size, char c)
{
char * arr = NULL; 

if (size == 0)
return (NULL);

arr = (char *)malloc(size * sizeof(char));
if (arr == NULL)
return (NULL);

for (unsigned int i = 0; i < size; i++)
arr[i] = c;

return (arr);
}
