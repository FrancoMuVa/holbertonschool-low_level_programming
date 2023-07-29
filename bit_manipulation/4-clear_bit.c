#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Sets a specific bit to 0.
 * @n: pointer.
 * @index: unsigned int.
 *
 * Return: 1 (Success), -1 Otherwise.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = *n;
	unsigned int j = 0;
	int i = (sizeof(n) * 8 - 1), mult = 1, mask = 2147483645;

	if (num == 0)
		return (1);
	else if (index == 0)
	{
		num = (num & mask);
		*n = num;
		return (1);
	}

	while (i >= 0)
	{
		if ((num >> i) & 1)
			break;
		i--;
	}

	while (j <= sizeof(n) * 8 - 1)
	{
		if (j++ == index)
		{
			num = (num & mask);
			*n = num;
			return (1);
		}
		mult *= 2;
		mask -= mult;
		i--;
	}
	return (-1);
}
