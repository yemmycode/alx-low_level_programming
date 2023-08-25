#include <stdlib.h>
#include "lists.h"

/**
* list_len function: Counts the elements in a linked list.
* @head: Pointer to the starting node of the list.
*
* Return: Count of elements in the list.
*/

size_t list_len(const list_t *head)
{
size_t elementCount = 0;


while (head)
{
elementCount++;
head = head->next;
}

return (elementCount);
}
