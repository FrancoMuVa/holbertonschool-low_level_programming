#include "main.h"

/**
 * print_diagonal - Draw a diagonal.
 * @n: integer.
 *
 */

void print_diagonal(int n)
{
	int i, j, x;

	if (n > 0)
	{
		x = 0;
		j = 1;
		for (i = 1; i <= n; i++)
		{
			while (x != 1)
			{
				if (i == j)
				{
					_putchar('\\');
					x++;
				}
				_putchar(' ');
				j++;
			}
			_putchar('\n');
			x = 0;
			j = 1;
		}
	}
	else
		_putchar('\n');
}
