#include "search_algos.h"

/**
 * print_array - print the array.
 * @array: array to print.
 * @size: size of array.
 *
 * Return: (void).
*/

void print_array(int *array, int size)
{
	int i = 0;

	printf("Searching in array: ");
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

/**
 * bin_recursive - recursive function to find the value in array.
 * @array: array of integers.
 * @low: lower number of the subarray.
 * @high: largest number of the subarray.
 * @value: value to search for.
 *
 * Return: Index of the value (Success), -1 Otherwise.
*/

int bin_recursive(int *array, int low, int high, int value)
{
	int middle;

	if (low > high)
		return (-1);

	print_array(&array[low], (high - low) + 1);

	middle = (low + high) / 2;

	if (value == array[middle])
		return (middle);

	else if (value > array[middle])
		return (bin_recursive(array, middle + 1, high, value));

	else if (value < array[middle])
		return (bin_recursive(array, low, middle - 1, value));

	return (0);
}

/**
 * binary_search - Searches for a value in a sorted array of integers.
 * @array: array of integers.
 * @size: number of elements in @array.
 * @value: value to search for.
 *
 * Return: Index of the value (Success), -1 Otherwise.
 */

int binary_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (bin_recursive(array, 0, size - 1, value));
}
