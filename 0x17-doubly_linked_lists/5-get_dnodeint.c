#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the head of the list
 * @index: index of the node to return (starting from 0)
 * Return: the nth node of the list, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *node;

	if (head == NULL)
		return (NULL);

	node = head;

	for (i = 0; i < index; i++)
	{
		if (node->next == NULL)
			return (NULL);
		node = node->next;
	}
	return (node);
}
