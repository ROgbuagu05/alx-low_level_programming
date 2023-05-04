#include <stdio.h>
#include "main.h"
/**
 * set_bit - sets the bit at the given index to 1.
 * @n: Pointer to the unsigned long integer
 * @index: Index of the bit to set to 1
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= (1UL << index);

	return (1);
}
