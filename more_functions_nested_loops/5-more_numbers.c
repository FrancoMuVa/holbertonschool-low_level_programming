#include "main.h"

/**
 * more_numbers - Print ten times 0 to 14
 *
 */

void more_numbers(void)
{
	int i, j, d1;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				d1 = j / 10;
				j = j % 10;
				_putchar(d1 + '0');
			}
			_putchar(j);
		}

		_putchar('\n');
	}
}
