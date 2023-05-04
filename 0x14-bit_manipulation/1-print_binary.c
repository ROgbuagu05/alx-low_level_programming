#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: The number to be printed in binary.
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = ~(~0ul >> 1);

	while (mask != 0)
	{
		if (n & mask)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}
		mask >>= 1;
	}
}
