#include <stdio.h>
#include <math.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
		putchar(ch);

	putchar('\n');

	round(0);
}
