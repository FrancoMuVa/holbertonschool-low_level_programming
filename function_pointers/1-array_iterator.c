#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Execute a function on ech element of array.
 * @array: Pointer.
 * @size: Size_t.
 * @action: Pointer.
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
