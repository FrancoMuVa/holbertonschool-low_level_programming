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
 * expo_binary_search - Process of exponential algorithm.
 * @array: array of numbers.
 * @value: value to search for.
 * @low: low index of subarray.
 * @high: high index of subarray.
 *
 * Return: Index of @value (Success), -1 Otherwise.
*/

int expo_binary_search(int *array, int value, int low, int high)
{
	int middle;

	if (low > high)
		return (-1);

	print_array(&array[low], (high - low) + 1);

	middle = (low + high) / 2;

	if (value == array[middle])
		return (middle);

	else if (value > array[middle])
		return (expo_binary_search(array, value, middle + 1, high));

	else if (value < array[middle])
		return (expo_binary_search(array, value, low, middle - 1));
	return (0);
}

/**
 * expo_linear_search - Process of exponential algorithm.
 * @array: array of numbers.
 * @size: number of elements of @array.
 * @value: value to search for.
 * @low: low index of subarray.
 * @high: high index of subarray.
 *
 * Return: Index of @value (Success), -1 Otherwise.
*/

int expo_linear_search(int *array, size_t size, int value, int low, int high)
{
	if (high >= (int)size)
		high = size - 1;

	printf("Value checked array[%d] = [%d]\n", low, array[low]);

	if (value == array[high])
		return (high);

	else if (value > array[high] && high != (int)size - 1)
		return (expo_linear_search(array, size, value, high, high * 2));

	else
	{
		printf("Value found between indexes [%d] and [%d]\n", low, high);
		return (expo_binary_search(array, value, low, high));
	}
	return (0);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers.
 * @array: array of integers.
 * @size: enumber of elements of @array.
 * @value: value to search for.
 *
 * Return: Index of the @value (Success), -1 Otherwise.
*/

int exponential_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);
	return (expo_linear_search(array, size, value, 1, 2));
}
