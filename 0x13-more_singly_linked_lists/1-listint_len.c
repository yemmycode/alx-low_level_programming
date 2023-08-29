#include "lists.h"

/**
* listint_len - Counts the number of elements in a linked list.
* @h: Pointer to the head of the linked list.
*
* Return: The number of elements in the linked list.
*/
size_t listint_len(const listint_t *h)
{
size_t count;

for (count = 0; h != NULL; count++, h = h->next)
;

return (count);
}
