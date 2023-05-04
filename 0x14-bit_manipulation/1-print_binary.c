#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: The number to be printed in binary.
 * Return: No return
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask > 0)
	{
		if (n & mask)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		mask >>= 1;
	}
}
