#include "main.h"
#include <stdlib.h>

/**
* *malloc_checked - Allocate memory using malloc and check for errors
* @bytes: The number of bytes to be allocated
* Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int bytes)
{
void *ptr;

ptr = malloc(bytes);

if (ptr == NULL)
{
exit(98);
}

return (ptr);
}
