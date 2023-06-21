#include "main.h"

/**
 * swap_int - Swap the values.
 * @a: First pointer.
 * @b: Second pointer:
 *
 */

void swap_int(int *a, int *b)
{
	int piv;

	piv = *a;
	*a = *b;
	*b = piv;
}
