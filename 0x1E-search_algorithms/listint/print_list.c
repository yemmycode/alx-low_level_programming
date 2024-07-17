#include <stdio.h>
#include "../search_algos.h"

/**
 * print_list - This prints the content of a listint_t
 * @list: The pointer to the head of the list
 */
void print_list(const listint_t *list)
{
    printf("List :\n");
    while (list != NULL)
    {
        printf("Index[%lu] = [%d]\n", (unsigned long)list->index, list->n);
        list = list->next;
    }
    printf("\n");
}
