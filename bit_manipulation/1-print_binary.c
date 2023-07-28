#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: unsigned long int.
 *
 * Return: Nothing.
 */

void print_binary(unsigned long int n)
{
	int i = sizeof(n) * 8 - 1;

	if (n == 0)
		_putchar('0');
	else
	{
		while (i >= 0)
		{
			if ((n >> i) & 1)
				break;
			i--;
		}
		while (i >= 0)
		{
			_putchar((n >> i) & 1 ? '1' : '0');
			i--;
		}
	}
}
