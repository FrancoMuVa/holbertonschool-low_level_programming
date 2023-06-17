#include "main.h"

/*
 * main - Print 10 times the alphabet
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	char ch;

	i = 1;

	while (i <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);

		 i++;
	}
	_putchar(ch);

	return (0);
}
