#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 - Frees a listint_t linked list and sets the head to NULL.
* @head: Pointer to a pointer to the head node of the linked list.
*
* function frees each node in a linked list of integers and sets the
* head pointer to NULL to indicate empty list.
*/
void free_listint2(listint_t **head)
{
while (*head != NULL)
{
listint_t *temp;
temp = *head;

*head = (*(*head)).next;

free(temp);
}

*head = NULL;
}
