#include "main.h"

/**
 * print_diagonal - Draw a diagonal.
 * @n: integer.
 *
 */

void print_diagonal(int n)
{
	int i, j, vn;

	if (n > 0)
	{
		vn = n;
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= vn; j++)
			{
				if (j == i)
				{
					_putchar('\\');
					vn = vn - 1;
				}
				else
					_putchar('.');
			}
			_putchar('\n');
			vn = n;
		}
	}
	else
		_putchar('\n');
}
