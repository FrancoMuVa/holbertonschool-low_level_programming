#include "main.h"

/**
 * print_alphabet_10 - chek the code.
 *
 * Return: Always 0.
 */

int print_alphabet_10(void)
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

	return (0);
}
