#include <stdlib.h>
#include "lists.h"

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
