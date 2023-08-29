#include <stdio.h>
#include "lists.h"

/**
* print_listint - Display all elements contained
* within a listint_t linked list.
* @h: The head node of the linked list.
* Return: The count of nodes present in the list.
*/
size_t print_listint(const listint_t *h)
{
size_t nodeCount;
nodeCount = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
nodeCount++;
}

return (nodeCount);
}
