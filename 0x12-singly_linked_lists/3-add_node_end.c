#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end function: Adds a new node to the end of a linked list.
* @head: A double pointer to the list_t list.
* @str: The string for the new node.
*
* Return: Address of the new element, or NULL on allocation failure.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newNode;
list_t *temp = *head;
unsigned int len = 0;

while (str[len])
len++;

newNode = malloc(sizeof(list_t));
if (!newNode)
return (NULL);

newNode->str = strdup(str);
newNode->len = len;
newNode->next = NULL;

if (*head == NULL)
{
*head = newNode;
return (newNode);
}

while (temp->next)
temp = temp->next;

temp->next = newNode;

return (newNode);
}
