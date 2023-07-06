#include <stdio.h>
#include "hash_tables.h"
/**
 * key_index - the index at which the key/value pair
 * should be stored in the array of the hash table.
 * @key: The key
 * @size: The size of the array of the hash table
 * Return: the index at which the key/value pair should be stored
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
