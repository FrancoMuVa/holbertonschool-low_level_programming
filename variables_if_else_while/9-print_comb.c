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

	ch = 44;
	for (num = 48; num <= 57; num++)
	{
		putchar(num);

		if (num == 57)
			putchar(ch - 8);
		else
			putchar(ch);
	}
	putchar('\n');

	return (0);
}
