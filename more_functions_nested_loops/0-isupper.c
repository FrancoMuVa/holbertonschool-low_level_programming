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

	i = 65;
	while (i <= 90 && i != c)
	{
		i++;
	}
	if (i > 90)
		return (0);
	else
		return (1);
}
