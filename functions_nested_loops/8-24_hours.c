#include "main.h"

/**
 * jack_bauer - Print every minutes.
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int h1, h2, m1, m2, v_h1, v_h2, v_top, v_m1, v_m2, i;

	v_h1 = 0;
	v_h2 = 0;
	v_top = 9;
	v_m1 = 0;
	v_m2 = 0;
	i = 0;
	for (h1 = v_h1; h1 <= 2; h1++)
	{
		for (h2 = v_h2; h2 <= v_top; h2++)
		{
			for (m1 = v_m1; m1 <= 5; m1++)
			{
				for (m2 = v_m2; m2 < 10; m2++)
				{
					_putchar(h1 + '0');
					_putchar(h2 + '0');
					_putchar(':');
					_putchar(m1 + '0');
					_putchar(m2 + '0');
					_putchar('\n');
				}

				v_m2 = 0;
			}
			if (v_m1 > 5)
				v_m1 = 0;
		}
		if (h2 > 9)
		{
			h2 = 0;
			i++;
		}
		if (i == 2)
			v_top = 3;
	}
}
