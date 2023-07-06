#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_delete - This function deletes a hash table.
 * @ht: Pointer to the hash table to be deleted
 * Return: None
 */
void hash_table_delete(hash_table_t *ht)
{
	if (ht == NULL)
	{
		printf("Error: Hash table is already NULL\n");
		return;
	}

	free(ht);
}
