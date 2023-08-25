#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_list function: Prints the elements of a linked list list_t.
* @head: A pointer to the starting node of the list.
* Return: The count of nodes in the list.
*/
size_t print_list(const list_t *head)
{
size_t nodeCount = 0;


while (head != NULL)
{
if (head->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", head->len, head->str);

nodeCount++;
head = head->next;
}

return (nodeCount);
}
