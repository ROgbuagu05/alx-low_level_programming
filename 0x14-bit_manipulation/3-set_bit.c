#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * set_bit - setting value of a bit to 1
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * CHAR_BIT)
	{
		return (-1);
	}
	*n |= (1 << index);

	return (1);
}
