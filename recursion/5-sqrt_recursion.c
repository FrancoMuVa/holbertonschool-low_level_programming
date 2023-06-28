#include "main.h"

/**
 * square - Search if n have a square root.
 * @x: Integer.
 * @r: Integer.
 *
 * Return: Square root of n.
 */

int square(int x, int r)
{
	if (r * r == x)
		return (r);

	else if (x != r * r && r <= (x / 2))
		return (square(x, r + 1));

	else
		return (-1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Integer.
 *
 * Return: Square root of n.
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	else
		return (square(n, 1));
}
