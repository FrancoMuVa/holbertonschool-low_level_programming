#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array.
 * @array: array of integers.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: index of the value (Success), -1 Otherwize.
*/

int linear_search(int *array, size_t size, int value)
{
	int i = -1, elements = size;

	if (!array)
		return (i);

	i++;
	printf("Value checked array[%d] = [%d]\n", i, array[i]);
	while (i < elements && array[i] != value)
	{
		i++;
		if (i < elements)
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}

	if (i == elements)
		return (-1);
	return (i);
}
