#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i, j, p, var_i, var_j, var_p, count;

	var_i = 48;
	var_j = 49;
	var_p = 50;
	count = 7;

	for (i = var_i; i <= 55; i++)
	{
		for (j = var_j; j <= 56; j++)
		{
			for (p = var_p; p <= 57; p++)
			{
				putchar(i);
				putchar(j);
				putchar(p);

				if (i != 55 || j != 56 || p != 57)
				{
					putchar(',');
					putchar(' ');
				}
				if (p == 56)
					var_p = var_p + 1;
			}
			if (var_j != 56)
				var_j =  var_j + 1;
		}
		 var_i++;
		 --count;
		 var_j = var_j - count;
		 var_p = var_p - count;
	}

	putchar('\n');

	return (0);
}
