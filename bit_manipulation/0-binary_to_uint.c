#include "main.h"
#include <string.h>

/**
 * binary_to_uint - convert from binary to unsigned int.
 * @b: pointer.
 *
 * Return: Unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int UINT = 0;
	int len = strlen(b), i = strlen(b) - 1;

	if (b == NULL)
		return (0);
	while (i >= 0)
	{
		if (b[i] == '1')
			UINT += (1 << (len - i - 1));

		else if (b[i] != '0')
			return (0);
		i--;
	}

	return (UINT);
}
