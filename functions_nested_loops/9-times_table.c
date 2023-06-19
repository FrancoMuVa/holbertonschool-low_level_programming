#include "main.h"

/**
 * times_table - Print nine table.
 *
 */

void times_table(void)
{
	int t, m, v_m, resu, resu2;
	char resu_ch;

	v_m = 0;
	for (t = 0; t <= 9; t++)
	{
		for (m = v_m; m <= 9; m++)
		{
			resu = m * t;

			if (resu >= 10)
			{
				resu2 = resu % 10;
				resu = resu / 10;
				_putchar(resu + '0');
			}
			else if (m == 0)
				resu2 = resu;
			else
			{
				resu2 = resu;
				resu_ch = 32;
				_putchar(resu_ch);
			}

			_putchar(resu2 + '0');
			if (m != 9 && m != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		v_m = 0;
		_putchar('\n');
	}
}
