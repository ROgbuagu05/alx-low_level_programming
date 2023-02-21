#include "main.h"
/**
 * _islower - checks if a character is lower case
 * @c: the character
 * Return: 1 if @c letter is lowercase otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
