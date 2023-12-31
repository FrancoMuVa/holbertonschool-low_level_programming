#include "main.h"

/**
 * print_last_digit - Print last digit of a number.
 * @n: integer.
 *
 * Return: Always 0. (Sucaccess)
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -n;

	_putchar(n + '0');
	return (n);
}
