#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int num;
	int ch;

	for (num = 0; num <= 9; num++)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
		if (num == 9)
			putchar('$');
	}

	return (0);
}
