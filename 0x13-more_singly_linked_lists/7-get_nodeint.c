#include <stdlib.h>
#include "lists.h"

/**
* get_nodeint_at_index - Returns the nth node of a listint_t linked list.
* @head: Pointer to the head node of the linked list.
* @index: Index of the desired node, starting at 0.
*
* Return: Pointer to the nth node, or NULL if the node does not exist.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int c = 0;

while (head != NULL)
{
if (c == index)
return (head);

head = head[0].next;

c++;
}

return (NULL);
}
