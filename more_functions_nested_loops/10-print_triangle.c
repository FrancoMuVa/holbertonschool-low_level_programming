#include "main.h"

/**
 * print_triangle - Print a triangle.
 * @size: Size of the triangle.
 *
 */

void print_triangle(int size)
{
	int i, j, count;

	if (size > 0)
	{
		count = 0;
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j <= size - 1; j++)
			{
				count = (size) - i;
				if (j >= count)
				{
					_putchar('#');
				}
				else
					_putchar(' ');
			}
			_putchar('\n');
			count = 0;
		}
	}
	else
		_putchar('\n');
}
