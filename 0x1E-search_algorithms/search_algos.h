#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @index: index of node in list
 * @next: pointer to the next node
 * desc: singly liinked list structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - singly linked list with express lane
 * @n: integer
 * @index: index of node in list
 * @next: pointer tot node
 * @expres: pointer to next node on expresss lane
 * desc: singly linked list structure that has express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
void print_array(int *array, int left, int right);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplists_t *linear_skip(skiplist_t *list, int value);


#endif
