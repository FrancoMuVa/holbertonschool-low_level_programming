#include "main.h"

/**
 * print_diagonal - Draw a diagonal.
 * @n: integer.
 *
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (j == i)
					_putchar('\\');

				_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
