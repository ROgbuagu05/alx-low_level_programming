#include <stdio.h>
/**
 * main - Lists all natural numbers below 1024 (excluded)
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int sum;

	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + 1;
		}
	}
	printf("%d\n", sum);
	return (0);
}
