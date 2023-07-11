#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints the name.
 * @name: Char.
 * @f: Pointer.
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;

	f(name);
}
