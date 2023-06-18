#include "main.h"

/**
 * _isalpha - check aphabetic characters.
 * @c: first operand.
 *
 * Return: Always 0. (Sucaccess).
 */

int _isalpha(int c)
{
	int ch, i;

	i = 0;
	ch = 64;
	while (ch != c && i != 1)
	{
		while (ch <= 90 || ch == c)
		{
			ch++;

			if (ch == c)
				return (1);
		}

		if (ch != c)
		{
			ch = 96;
			while (ch <= 122 || ch == c)
			{
				ch++;

				if (ch == c)
					return (1);
			}
			i = 1;
		}
	}

	if (ch != c)
		return (0);

	_putchar('\n');

	return (0);
}
