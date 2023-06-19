#include "main.h"

/**
 * print_last_digit - Print last digit of a number.
 * @n: integer.
 *
 * Return: Always 0. (Sucaccess)
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = (n) - (n) * 2;

	n = n % 10;
	_putchar(n + '0');
	return (n);

	return (0);
}
