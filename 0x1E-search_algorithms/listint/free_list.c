#include <stdlib.h>
#include "../search_algos.h"

/**
 * free_list - Recursively deallocates a singly linked list
 * @list: Pointer to the linked list to be freed
 */
void free_list(listint_t *list)
{
    listint_t *next_node;

    if (list != NULL)
    {
        next_node = list->next;
        free(list);
        free_list(next_node);
    }
}
