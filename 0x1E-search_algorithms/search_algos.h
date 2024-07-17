#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Structure defining a node in a singly linked list
 *
 * @n: Integer value stored in the node
 * @index: Index of the node in the list
 * @next: Pointer to the next node in the list
 *
 * Description: Defines a node structure for a singly linked list.
 */

typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Node structure for a singly linked list with an express lane
 *
 * @n: Integer value of the node
 * @index: Position index of the node within the list
 * @next: Pointer to the subsequent node in the list
 * @express: Pointer to the next node in the express lane
 *
 * Description: Defines a node in a singly linked list that includes 
 * an express lane for optimized traversal.
 */

typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;


skiplist_t *linear_skip(skiplist_t *list, int value);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);

#endif 
