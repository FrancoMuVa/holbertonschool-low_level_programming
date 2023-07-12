#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * selector - select and prints.
 * @x: Char.
 * @args: ar.
 *
 * Return: Nothing.
 */

int selector(char x, va_list args)
{
	switch (x)
	{
		case 'c':
			printf("%c", va_arg(args, int));
			return (0);
		case 'i':
			printf("%d", va_arg(args, int));
			return (0);
		case 'f':
			printf("%f", va_arg(args, double));
			return (0);
		case 's':
			if (args == NULL)
				printf("(nil)");

			else
				printf("%s", va_arg(args, char *));
			return (0);
	}
	return (1);
}

/**
 * print_all - Prints all.
 * @format: Pointer.
 *
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	int i, j, selec = 0;
	va_list args;

	if (format == NULL)
		return;

	va_start(args, format);

	i = 0;
	while (format[i] != '\0')
	{
		selec = selector(format[i], args);
		j = 0;
		while (format[i + 1] != '\0' && j != 1 && selec == 0)
		{
			printf(", ");
			j = 1;
		}
		i++;
	}

	printf("\n");
}
