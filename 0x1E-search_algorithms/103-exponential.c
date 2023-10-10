#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array
 * of integers using the Exponential search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 * Return: Index of the first occurrence of the value in the array.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, end = 0, index = 0, pivot = 0;
	size_t exp = 1;

	if (size == 0 || !array)
		return (-1);
	while (array[exp] < value && exp < size)
	{
		printf("Value checked array[%ld] = [%d]\n", exp, array[exp]);
		exp *= 2;
	}
	index = exp / 2;
	if (exp >= size)
		end = size - 1;
	else
		end = exp;
	printf("Value found between indexes [%lu] and [%lu]\n", index, end);
	while (end >= index)
	{
		printf("Searching in array: ");
		for (i = index; i <= end; i++)
		{
			if (i != index)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");
		pivot = (end + index) / 2;
		if (value == array[pivot])
			return (pivot);
		else if (value < array[pivot])
			end = pivot - 1;
		else
			index = pivot + 1;
	}
	return (-1);
}
