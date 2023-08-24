#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_list - Prints all elements in a list_t linked list.
* @head: A pointer to the head of the list.
* Return: The number of nodes in the list.
*/
size_t print_list(const list_t *head)
{
size_t nodes = 0;

while (head != NULL)
{
if (head->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", head->len, head->str);

nodes++;
head = head->next;
}

return (nodes);
}
