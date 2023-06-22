#include "main.h"

/**
 * puts_half - Print a half of a string.
 * @str: String.
 *
 */

void puts_half(char *str)
{
	int i, c, n;

	c = 0;
	for (i = 0; str[i] != '\0'; i++)
		c++;

	c--;
	if (c % 2 == 0)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if (i >= (c / 2))
				_putchar(str[i]);
		}
	}
	else
	{
		n = (c - 1) / 2;
		c = c - n;
		for (i = n; str[i] != '\0'; i++)
			_putchar(str[i]);
	}

	_putchar('\n');
}
