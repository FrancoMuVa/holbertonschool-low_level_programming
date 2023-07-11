#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches an integer.
 * @array: Pointer.
 * @size: int.
 * @cmp: Pointer.
 *
 * Return: Integer.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);

		i++;
	}

	return (-1);
}
