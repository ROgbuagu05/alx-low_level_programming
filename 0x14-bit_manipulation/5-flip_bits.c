#include "main.h"
#include <stdio.h>

/**
 * flip_bits -  This function takes two unsigned long ints,
 * n and m, and returns the number of bits
 * that need to be flipped to get from n to m.
 * @n: The first unsigned long int
 * @m: The second unsigned long int
 * Return: The number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);
}
