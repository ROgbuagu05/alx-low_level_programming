#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: Pointer to the head of the list.
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;
	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
