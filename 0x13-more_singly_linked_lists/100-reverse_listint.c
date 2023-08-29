#include "lists.h"

/**
* reverse_listint - this reverses a listint_t linked list
* @head: the pointer to pointer to the head of the list
* Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev, *next;


if (head == NULL || *head == NULL || (*head)->next == NULL)
return (*head);


prev = NULL;
next = (*head)->next;


while (1)
{

(*head)->next = prev;


prev = (*head);


*head = next;


if (*head == NULL)
break;


next = (*head)->next;
}


return (prev);
}
