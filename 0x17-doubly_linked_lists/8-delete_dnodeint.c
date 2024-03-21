#include "lists.h"

/**
* delete_dnodeint_at_index - deletes the node at a given position
* @head: pointer to a pointer to the head of the list
* @index: index of the node to be deleted
* Return: 1 if succeeded, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current, *temp;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

current = *head;

if (index == 0)
{
*head = (*head)->next;
if (*head)
(*head)->prev = NULL;
free(current);
return (1);
}

for (i = 0; current != NULL && i < index; i++)
{
temp = current;
current = current->next;
}

if (!current)
return (-1);

temp->next = current->next;
if (current->next)
current->next->prev = temp;
free(current);

return (1);
}
