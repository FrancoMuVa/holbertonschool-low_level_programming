#include "main.h"

/**
 * _islower - chek the code.
 * @c: First operand
 *
 * Return: Always 0. (Sucaccess)
 */

int _islower(int c)
{
	int ch;

	ch = 96;
	while (ch <= 122 || ch == c)
	{
		ch++;

		if (ch == c)
			return (1);
	}
	if (ch != c)
		return (0);

	return (0);
}
