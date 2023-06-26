#include "main.h"

/**
 * reverse_array - Reverses the content of an array.
 * @a: Pointer to integer.
 * @n: Integer.
 *
 */

void reverse_array(int *a, int n)
{
	int i, piv, aux;

	if (n != 0)
	{
		aux = n - 1;

		for (i = 0; i <= n / 2; i++)
		{
			piv = a[aux - i];
			a[aux - i] = a[i];
			a[i] = piv;
		}
	}
}
