#include "main.h"

/**
 * get_bit - Get the value of a bit a given index.
 * @n: unsigned long int.
 * @index: unsigned int.
 *
 * Return: Value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j = 1;
	int bit = 0, i = (sizeof(n) * 8 - 1);

	if (index == 0 && n == 0)
		return (0);

	if (index > sizeof(n) * 8 - 1)
	while (i >= 0)
	{
		if ((n >> i) & 1)
			break;
		i--;
	}

	i += 1;
	if (index > (i - j) && index < sizeof(n) * 8 - 1)
		return (0);

	while (i >= 0)
	{
		if ((i - j) == index)
		{
			bit = ((n >> (i - 1)) & 1 ? 1 : 0);
			return (bit);
		}
		i--;
	}
	return (-1);
}
