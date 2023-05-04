#include <stdio.h>
#include "main.h"
/**
 * flip_bits - returns the number of bits to be flipped
 * in orfer to convert one numbe rto the other.
 * @n: The first number
 * @m: The second number
 * Return: The number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		count++;
		xor &= (xor - 1);
	}
	return (count);
}
