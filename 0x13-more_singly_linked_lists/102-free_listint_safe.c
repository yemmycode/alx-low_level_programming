#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_listint_safe - Safely frees a listint_t linked list to prevent looping.
* @h: A pointer to a pointer to the head of the linked list.
* Return: The number of nodes freed.
*/
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *temp, *loop;

if (!h || !*h)
return (0);

temp = *h;

while (temp)
{
count++;

printf("[%p] %d\n", (void *)temp, temp->n);

loop = temp;
temp = temp->next;
free(loop);

if (temp <= loop)
{
printf("-> [%p] %d\n", (void *)temp, temp->n);
break;
}
}

*h = NULL;

return (count);
}
