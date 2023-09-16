#include "search_algos.h"

/**
 * jump_search -  Searches for a value in a sorted array of integers.
 * @array: array of integers.
 * @size: number of elements in @array.
 * @value: value to search for.
*/

int jump_search(int *array, size_t size, int value)
{
	int size_int = size, first = 0, end = sqrt(size), i = 0;

	if (!array || size == 0)
		return (-1);

	printf("Value checked array[%d] = [%d]\n", array[first], first);
	while (end < size_int && array[end] < value)
	{
		printf("Value checked array[%d] = [%d]\n", array[end], end);
		first = end;
		end += sqrt(size);
	}
	printf("Value found between indexes [%d] and [%d]\n", first, end);

	i = first;
	while (i <= end && i < size_int)
	{
		printf("Value checked array[%d] = [%d]\n", array[i], i);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
