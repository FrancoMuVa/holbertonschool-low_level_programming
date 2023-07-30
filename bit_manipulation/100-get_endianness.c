#include "main.h"

/**
 * get_endianness - Determinate the byte architecture of the machine.
 *
 * Return: 1 (littel-endian) - 0 (big-endian).
 */

int get_endianness(void)
{
	int num = 1024;
	char *ptr = (char *)&num;

	return ((ptr[(num >> 10)] > ptr[(num >> 0)]) ? 0 : 1);
}
