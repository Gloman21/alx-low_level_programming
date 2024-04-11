#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - a linear search function
 * @array: an array to search from
 * @size: the size of the array
 * @value: the value to search for
 * Return: index where value is located or -1 on failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	return (-1);

	for (i = 0; i < size; i++)
	{
	printf("Version 1: Value checked array[%ld] = [%d]\n", i, array[i]);
	 if (array[i] == value)
		 return (i);
	}
	return (-1)
}
