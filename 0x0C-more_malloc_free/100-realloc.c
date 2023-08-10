#include "main.h"
#include <stdlib.h>

/**
* *_realloc - this function reallocates a memory block using the
* malloc and free functions
* @ptr: the pointer to the memory previously allocated by malloc
* @old_size: Size of the memory block before reallocation
* @new_size: New size of the memory block after reallocation
* Return: Pointer to the newly allocated memory block, or NULL on failure
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;
char *old_ptr;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
return (malloc(new_size));

new_ptr = (char *)malloc(new_size);
if (!new_ptr)
return (NULL);

old_ptr = ptr;

if (new_size < old_size)
{
for (i = 0; i < new_size; i++)
new_ptr[i] = old_ptr[i];
}

if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
new_ptr[i] = old_ptr[i];
}

free(ptr);
return (new_ptr);
}
