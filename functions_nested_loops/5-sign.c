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
		return (1);
		_putchar('+');
	}
	else if (n == i)
	{
		return (0);
		_putchar('0');
	}
	else if (n < i)
	{
		return (-1);
		_putchar('-');
	}


	return (0);
}
