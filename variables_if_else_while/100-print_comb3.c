#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i, j, var_i, var_j;

	var_i = 48;
	var_j = 49;

	for (i = var_i; i < 57; i++)
	{
		for (j = var_j; j <= 57; j++)
		{
			putchar(i);
			putchar(j);

			if (i != 56 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}
			if (j == 57)
				var_j++;
		}
		var_i++;
	}

	putchar('\n');

	return (0);
}
