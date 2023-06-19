#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print all natirals numbers between n and 98.
 * @n: Integer.
 *
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
			else if (i == 98)
				printf("\n");
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
			else if (i == 98)
				printf("\n");
		}
	}
}
