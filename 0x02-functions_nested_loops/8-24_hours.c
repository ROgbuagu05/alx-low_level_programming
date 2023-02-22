#include "main.h"
/**
 * jack_bauer - prints 24hrs time
 * Return: void
 */
void jack_bauer(void)
{
	int i, j;

	i = 0;
	j = 0;

	while (i < 24)
	{
		while (j < 60)
		{
			_putchar(i + '0');
			_putchar(':');
			_putchar(j > 9 ? (int)j + '0' : j + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
