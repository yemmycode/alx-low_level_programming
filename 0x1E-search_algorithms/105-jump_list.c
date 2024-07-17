#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list of integers
 *             using jump search.
 * @list: A pointer to the head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 *
 * Description: Prints a message every time a value is compared in the list.
 *              Uses the square root of the list size as the jump step.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t step, step_size;
    listint_t *node, *jump;

    if (list == NULL || size == 0)
        return NULL;

    step = 0;
    step_size = sqrt(size);
    for (node = jump = list; jump->index + 1 < size && jump->n < value;)
    {
        node = jump;
        for (step += step_size; jump->index < step; jump = jump->next)
        {
            if (jump->index + 1 == size)
                break;
        }
        printf("Value checked at index [%ld] = [%d]\n", (long)jump->index, jump->n);
    }

    printf("Value found between indexes [%ld] and [%ld]\n", (long)node->index, (long)jump->index);

    for (; node->index < jump->index && node->n < value; node = node->next)
        printf("Value checked at index [%ld] = [%d]\n", (long)node->index, node->n);
    printf("Value checked at index [%ld] = [%d]\n", (long)node->index, node->n);

    return (node->n == value ? node : NULL);
}
