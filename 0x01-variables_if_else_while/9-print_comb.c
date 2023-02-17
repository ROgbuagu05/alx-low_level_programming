#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 100; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
