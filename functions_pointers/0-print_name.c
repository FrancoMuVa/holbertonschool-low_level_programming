#include "function_pointers.h"

/**
 * print_name - Prints the name.
 * @name: Char.
 * @f: Pointer.
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
