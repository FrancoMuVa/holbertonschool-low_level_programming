#include "main.h"

/**
 * more_numbers - Print ten times 0 to 14
 *
 */

void more_numbers(void)
{
	int i, j, d1, d2;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			d2 = j;

			if (j >= 10)
			{
				d1 = j / 10;
				d2 = j % 10;
				_putchar(d1 + '0');
			}
			_putchar(d2 + '0');
		}

		_putchar('\n');
	}
}
