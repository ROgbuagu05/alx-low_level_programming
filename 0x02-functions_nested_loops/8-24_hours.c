#include "main.h"
/**
 * jack_bauer - prints every minute of the day starting from 00:00
 * Return: 0 (Successful)
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
			_putchar(j + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
