#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int ones = '0';
	int tens = '0';
	int hund = '0';

	for (hund = '0'; hund <= '9'; hund++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (ones = '0'; ones <= '9'; ones++)
			{
				if (!((ones == tens) || (tens == hund) || (tens > ones) || (hund > tens)))
				{
					putchar(hund);
					putchar(tens);
					putchar(ones);
					if (!(ones == '9' && hund == '7' && tens == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
