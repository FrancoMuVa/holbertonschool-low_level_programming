#include "main.h"

/**
 * alphabet10 - chek the code.
 *
 * Return: Always 0.
 */

int alphabet10(void)
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
