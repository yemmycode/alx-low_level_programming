#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index - Deletes the node at a given index of a listint_t linked list.
* @head: the pointer to a pointer to the head of the list.
* @index: the index of the node to be deleted, starting from 0.
*
* Return: 1 if deletion succeeded, -1 if it deletion failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *prev;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

temp = *head;

if (!index)
{
*head = temp->next;
free(temp);
return (1);
}

prev = NULL;
for (i = 0; i < index && temp != NULL; i++)
{
prev = temp;
temp = temp->next;
}

if (temp == NULL)
return (-1);

if (prev != NULL)
prev->next = temp->next;
else
*head = temp->next;

free(temp);

return (1);
}
