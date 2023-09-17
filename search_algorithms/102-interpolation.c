#include "search_algos.h"

/**
 * print_cmp - print the comparation of the value whith the seached value.
 * @array: array of integers.
 * @hi: size of @array.
 * @indx: index of the element to comared.
 *
 * Return: (void).
*/

void print_cmp(int *array, int hi, int indx)
{
	if (indx > hi - 1)
		printf("Value checked array[%d] is out of range\n", indx);
	else
		printf("Value checked array[%d] = [%d]\n", indx, array[indx]);
}

/**
 * search_recursive - recursive function to search.
 * @array: array of integers.
 * @size: number of elements.
 * @value: value to search for.
 * @low: low number in sub array.
 * @high: high number in sub array.
 *
 * Return: Index of @value (Success), -1 Otherwise.
*/

int search_recursive(int *array, size_t size, int value, int low, int high)
{
	size_t pos = 0;

	if (low > high)
		return (-1);

	pos = low + (((double)(high - low) /
	(array[high] - array[low])) * (value - array[low]));

	print_cmp(array, size, pos);

	if ((int)pos > high)
		return (-1);

	else if (array[pos] == value)
		return (pos);

	else if (array[pos] < value)
		return (search_recursive(array, size, value, pos + 1, high));

	else if (array[pos] > value)
		return (search_recursive(array, size, value, low, pos - 1));

	return (0);
}

/**
 * interpolation_search - Searches for a value in a sorted array of integers.
 * @array: array of integers.
 * @size: number of elements in @array.
 * @value: value to search for.
 *
 * Return: Index of the @value (Success), -1 Otherwise.
*/

int interpolation_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (search_recursive(array, size, value, 0, size - 1));
}
