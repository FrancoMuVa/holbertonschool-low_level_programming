#include "main.h"

/**
 * print_alphabet_x10 - chek the code.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i;
	char ch;

	i = 1;

	while (i <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);

		 i++;

		_putchar('\n');
	}
}
