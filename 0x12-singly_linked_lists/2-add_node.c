#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node function: Inserts a new node at the start of a linked list.
* @head: A double pointer to the list_t list.
* @str: The new string to be added to the node.
*
* Return: The pointer to the new element, or NULL if allocation fails.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *newNode;
unsigned int strLength = 0;


while (str[strLength])
strLength++;


newNode = malloc(sizeof(list_t));
if (!newNode)
return (NULL);


newNode->str = strdup(str);
newNode->len = strLength;
newNode->next = (*head);

(*head) = newNode;

return (*head);
}
