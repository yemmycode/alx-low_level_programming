#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a skip list.
 * @list: Pointer to the head of the skip list to traverse.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL if list
 * is NULL or value not found.
 *
 * Description: Assumes a sorted skip list with a single skip layer where nodes
 * are positioned at indices which are multiples of the square root of the size
 * of the list.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *temp = NULL, *stop = NULL;

    if (!list)
        return NULL;

    temp = list;
    while (temp && temp->express && temp->express->n < value)
    {
        printf("Value checked at index [%lu] = [%i]\n",
               (unsigned long)temp->express->index, temp->express->n);
        temp = temp->express;
    }
    stop = temp;
    while (stop && stop->next != stop->express)
        stop = stop->next;

    if (temp->express)
    {
        printf("Value checked at index [%lu] = [%i]\n",
               (unsigned long)temp->express->index, temp->express->n);
        printf("Value found between indexes [%lu] and [%lu]\n",
               (unsigned long)temp->index, (unsigned long)temp->express->index);
    }
    else
    {
        printf("Value found between indexes [%lu] and [%lu]\n",
               (unsigned long)temp->index, (unsigned long)stop->index);
    }

    while (temp != stop && temp->n < value)
    {
        printf("Value checked at index [%lu] = [%i]\n",
               (unsigned long)temp->index, temp->n);
        temp = temp->next;
    }
    printf("Value checked at index [%lu] = [%i]\n",
           (unsigned long)temp->index, temp->n);

    if (temp == stop)
        return NULL;

    return temp;
}
