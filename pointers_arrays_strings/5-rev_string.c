#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverse a string.
 * @s: String.
 *
 */

void rev_string(char *s)
{
	int i, c;
	char aux, *pfir, *plast = s;

	for (i = 0; s[i] != '\0'; i++)
		plast++;

	plast--;
	pfir = s;
	c = i + 1;

	for (i = 0; i < c / 2; i++)
	{
		aux = *plast;
		*plast = *pfir;
		*pfir = aux;
		plast--;
		pfir++;
	}
}
