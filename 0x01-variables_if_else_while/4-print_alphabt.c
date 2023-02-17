#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the alphabets in lowercase, followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (char <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
