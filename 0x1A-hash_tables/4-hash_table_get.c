#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_get - Get a value from the hash table.
 * @ht: Hash table to look into.
 * @key: The key.
 *
 * Return: value associated with the element or NULL otherwise.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (key == NULL || strcmp(key, "") == 0 || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	if (current == NULL)
		return (NULL);

	while (current != NULL && strcmp(current->key, key) != 0)
	{
		current = current->next;
	}

	if (current == NULL)
		return (NULL);
	else
		return (current->value);
}
