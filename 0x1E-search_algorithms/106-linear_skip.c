#include <stdio.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list to search in.
 * @value: The value to search for.
 * Return: A pointer to the first node where the value is located.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *current;

	if (list == NULL)
		return (NULL);

	for (node = current = list; current->next != NULL && current->n < value;)
	{
		node = current;
		if (current->express != NULL)
		{
			current = current->express;
			printf("Value checked at index [%ld] = [%d]\n",
					current->index, current->n);
		}
		else
		{
			while (current->next != NULL)
				current = current->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, current->index);

	for (; node->index < current->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
