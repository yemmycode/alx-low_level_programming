#include "lists.h"

/**
* find_listint_loop - Locates a loop in a linked list.
* @head: Pointer to the head of the list.
* Return: The address of the node where the loop
* starts, or NULL if there is no loop.
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow, *fast;


if (!head || !head->next)
return (NULL);


slow = head;
fast = head->next;
while (fast)
{
if (slow == fast)
break;
slow = slow->next;
fast = fast->next;
if (fast)
fast = fast->next;
}


if (!fast)
return (NULL);


slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}

return (slow);
}
