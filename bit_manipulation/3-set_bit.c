#include "main.h"
#include <stdio.h>

/**
 * set_bit - Sets a specific bit to 1.
 * @n: pointer.
 * @index: unsigned int.
 *
 * Return: 1 (Success), -1 Otherwise.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = *n;
	unsigned int j = 1;
	int i = (sizeof(n) * 8 - 1), mask = 1, flag = 0;

	if (index == 0)
	{
		num = (num | 1);
		*n = num;
		return (1);
	}
	else if (num == 0)
		flag = 1;

	while (i >= 0)
	{
		if ((num >> i) & 1)
			break;
		i--;
	}

	if (flag == 1)
		i = index * 2 + 1;
	else
		i += 1;

	while (i >= 0)
	{
		if ((i - j) == index)
		{
			num = (num | mask);
			*n = num;
			return (1);
		}
		mask *= 2;
		i--;
	}

	return (-1);
}
