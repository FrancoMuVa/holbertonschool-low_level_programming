#include "main.h"

/**
 * _abs - Compute th abs value of int.
 * @i: integer.
 *
 * Return: Always 0. (Sucaccess)
 */

int _abs(int i)
{

	if (i >= 0)
		return (i);

	else
	{
		i = (i) - (i) * 2;
		return (i);
	}

	return (0);
}
