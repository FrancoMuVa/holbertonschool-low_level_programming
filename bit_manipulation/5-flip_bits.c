#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Counts the number of bits to be flipped from (n) to (m).
 * @n: Unsigned Long Int.
 * @m: Unsigned Long Int.
 *
 * Return: 1 (Success), -1 Otherwise.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int j = 0;
	unsigned int count = 0;
	int i = (sizeof(unsigned long int) * 8 - 1);

	while (i >= 0)
	{
		if ((n >> i) & 1)
			break;
		i--;
	}

	printf("\ni: %d", i);
	printf("\n__N__ | __M__\n");
	j = i;
	while (i-- >= 0)
	{
		printf(" %ld   |   %ld \n", (n >> j), (m >> j));
		count += (((n >> j) & 1) != ((m >> j) & 1)) ? 1 : 0;
		j--;
	}
	printf("\n\n=======================\n=======================\n\n");
	return (count);
}
