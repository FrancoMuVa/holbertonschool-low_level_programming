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

int bin_recursive(int *array, int low, int high, int value, int size)
{
	int middle;

	if (low > high)
		return (-1);

	print_array(&array[low], size);

	middle = (low + high) / 2;

	if (value == array[middle])
		return (middle);

	else if (value > array[middle])
		return (bin_recursive(array, middle + 1, high, value, size / 2));

	else if (value < array[middle])
		return (bin_recursive(array, low, middle - 1, value, size / 2));

	return (0);
}

/**
 * first_indx - Search for the index of the first @value in @array.
 * @array: array of integers.
 * @indx: index of @value.
 * @value: value to search for.
 *
 * Return: Index of the first @value in @array.
*/

int first_indx(int *array, int indx, int value)
{
	if (array[indx - 1] == value)
		return (first_indx(array, indx - 1, value));

	return (indx);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * @array: array of integers.
 * @size: number of elements in @array.
 * @value: value to search for.
 *
 * Return: Index of the value (Success), -1 Otherwise.
 */

int advanced_binary(int *array, size_t size, int value)
{
	int indx;

	if (!array || size == 0)
		return (-1);

	indx = bin_recursive(array, 0, size - 1, value, size);
	return (first_indx(array, indx, value));
}
