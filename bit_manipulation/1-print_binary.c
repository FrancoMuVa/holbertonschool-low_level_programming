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
		write(1, "0", 1);
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
			write(1, (n >> i) & 1 ? "1" : "0", 1);
			i--;
		}
	}
}
