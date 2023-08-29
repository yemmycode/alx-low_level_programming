#include <stdlib.h>
#include "lists.h"

/**
* free_listint - Frees a linked list of integers.
* @head: Pointer to the head node of the linked list.
*
* This function frees each node in a linked list of integers.
*/
void free_listint(listint_t *head)
{
while (head != NULL)
{
listint_t *temp;
temp = head;

head = head[0].next;
free(temp);
}
}
