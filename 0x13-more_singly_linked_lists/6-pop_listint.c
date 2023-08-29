#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - Deletes the head node of a listint_t linked list.
* @head: Pointer to a pointer to the head node of the linked list.
*
* Return: The data (n) of the deleted head node, or 0 if the list is empty.
*/
int pop_listint(listint_t **head)
{
if (*head == NULL)
{
return (0);
}

int data = (*head)->data;
listint_t *temp;
temp = *head;

*head = (*head)->next;
free(temp);

return (data);
}
