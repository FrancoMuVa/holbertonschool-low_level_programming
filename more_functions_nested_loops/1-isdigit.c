#include "main.h"

/**
 * _isupper - check the uppercase character.
 * @c: Character.
 *
 * Return: Always 0.
 */

int _isupper(int c)
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
