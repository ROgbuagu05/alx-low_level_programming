#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: Pointer to head of the list.
 * @idx:  index of the list where the new node should be added.
 * @n: Data for the new node to enter
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *current = *h;

	if (h == NULL)
		return (add_dnodeint(h, n));

	while (i < idx - 1)
	{
		if (current == NULL)
			return (NULL);
		i++;
		current = current->next;
	}
	if (current == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = current->next;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;

	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
