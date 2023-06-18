#include "main.h"

/**
 * print_sign - Print the sign of a number.
 * @n: Number.
 *
 * Return: Always 0. (Sucaccess)
 */

int print_sign(int n)
{
	int i;

	i = 0;
	if (n > i)
	{
		_putchar('+');
		return (1);
	}
	else if (n == i)
	{
		_putchar('0');
		return (0);
	}
	else if (n < i)
	{
		_putchar('-');
		return (-1);
	}


	return (0);
}
