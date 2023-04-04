#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		size += 1;
		h = h->next;
	}
	return (size);
}
