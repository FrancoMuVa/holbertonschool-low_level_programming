#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of the diagonals of a square matrix.
 * @a: Pounter to array.
 * @size: Integer.
 *
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum_1, sum_2;

	sum_1 = 0;
	sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum_1 = sum_1 + a[i * size + j];

			if (j == (size - 1 - i))
				sum_2 = sum_2 + a[i * size + j];
		}
	}

	printf("%d, %d\n", sum_1, sum_2);
}
