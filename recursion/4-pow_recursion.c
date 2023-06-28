#include "main.h"

/**
 * _pow_recursion - Return the value of x raised to the power of y.
 * @x: Integer.
 * @y: Integer.
 *
 * Return: x rised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else
		return (x * _pow_recursion(x, y - 1));
}
