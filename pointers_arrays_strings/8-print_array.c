#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints elements of array.
 * @a: Array.
 * @n: Integer.
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		printf("%d", a[i - 1]);

		if (i != n)
			printf(", ");
	}
	printf("\n");
}
