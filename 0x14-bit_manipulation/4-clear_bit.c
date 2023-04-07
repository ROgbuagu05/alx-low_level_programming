#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0
 * at a given index.
 * @n: pointer to an unsigned long int
 * @index: index of the bit ot be set to 0
 * Return: index of the bit to be set to 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~(1 << index);

	return (0);
}
