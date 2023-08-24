#include <stdlib.h>
#include "lists.h"

/**
* free_list - Releases memory associated with a linked list.
* @head: The list_t list to be deallocated.
*/
void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
