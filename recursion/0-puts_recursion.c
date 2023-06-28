#include "main.h"

/**
 * _puts_recursion - Prints a string.
 * @s: Pointer to string.
 *
 */

void _puts_recursion(char *s)
{
	char c;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	c = *s;
	_putchar(c);
	s = s + 1;
	_puts_recursion(s);
}
