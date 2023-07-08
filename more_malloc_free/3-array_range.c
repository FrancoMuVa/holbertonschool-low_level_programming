#include "main.h"
#include <stdlib.h>

/**
 * array_range - Create an array of integers.
 * @min: Integer.
 * @max: Integer.
 *
 * Return: Pointer.
 */

int *array_range(int min, int max)
{
	int *p, i, size, sum = min;

	if (min > max)
		return (NULL);

	size = max - min;
	p = malloc((size + 1) * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		p[i] = sum;
		sum = sum + 1;
	}

	return (p);
}
