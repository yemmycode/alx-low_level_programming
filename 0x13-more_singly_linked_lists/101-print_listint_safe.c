#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_listint_safe - this prints a listint_t linked list
* @head: a pointer to the head of the list
* Return: the number of nodes present in the list
*/
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *slow, *fast, *loop;


if (!head)
return (0);


slow = head;
fast = head->next;
while (fast != NULL)
{
if (slow != NULL && fast != NULL && slow == fast)
break;
slow = slow->next;
fast = fast->next;
if (fast != NULL)
fast = fast->next;
}


if (fast != NULL)
{
loop = head;
while (loop != fast)
{
loop = loop->next;
fast = fast->next;
}
}
else
{
loop = NULL;
}


while (head != NULL)
{
printf("[%p] %d\n", (void *)head, head->n);
count++;
if (head == loop)
{
printf("-> [%p] %d\n", (void *)loop, loop->n);
break;
}
head = head->next;
}


return (count);
}
