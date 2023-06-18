#include "main.h"

/**
 * _isalpha - check aphabetic characters.
 * @c: first operand.
 *
 * Return: Always 0. (Sucaccess).
 */

int _isalpha(int c)
{
	int ch;

	ch = 64;
	while (ch != c)
	{
		while (ch <= 90 || ch == c)
		{
			ch++;

			if (ch == c)
				return (1);
		}

		ch = 96;
		while (ch <= 122 || ch == c)
		{
			ch++;

			if (ch == c)
				return (1);
		}
	}

	return (0);
}
