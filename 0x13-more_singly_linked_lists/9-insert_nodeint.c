#include <stdlib.h>
#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
if (!head)
return (NULL);

listint_t *newNode;
listint_t *current;
unsigned int i;

newNode = malloc(sizeof(listint_t));
if (!newNode)
return (NULL);

newNode->n = n;

if (idx == 0) {
newNode->next = *head;
*head = newNode;
return (newNode);
}

current = *head;
for (i = 0; current && i < idx - 1; i++)
{
current = current->next;
}

if (!current)
{
free(newNode);
return (NULL);
}

newNode->next = current->next;
current->next = newNode;

return (newNode);
}
