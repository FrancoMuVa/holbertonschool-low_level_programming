#include "main.h"

/**
 * _isdigit - check the digits.
 * @c: Character.
 *
 * Return: Always 0.
 */

int _isdigit(int c)
{
	int i;

	i = 48;

	while (i <= 57 && i != c)
		i++;

	if (i > 57)
		return (0);
	else
		return (1);
}
