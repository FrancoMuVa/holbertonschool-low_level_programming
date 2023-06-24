#include "main.h"
#include <stdio.h>

/**
 * _atoi - Convert a string to a integer.
 * @s: String.
 *
 * Return: Value of an integer.
 */

int _atoi(char *s)
{
	int i, c, j, m, flag, resu;
	unsigned int r;

	m = 1;
	r = 0;
	flag = 0;
	i = 0;

	while (s[i] != '\0' && flag != -1)
	{
		if (s[i] == '-')
			m = m * -1;

		while (48 <= s[i] && 57 >= s[i] && s[i] != '\0')
		{
			j = 47;
			c = -1;
			while (j != s[i] && s[i] != '\0')
			{
				flag = -1;
				c++;
				j++;
				if (j == s[i])
					r = r * 10 + c;
			}

			i++;

		}
		i++;
	}
	if (m < 0)
		r = r * -1;

	resu = r;
	return (resu);
}
