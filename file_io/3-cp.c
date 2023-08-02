#include "main.h"
#include <string.h>

/**
 * main - Copies the content of a file to another.
 * @argc: counter.
 * @argv: pointer.
 *
 * Return: 1 (Success).
 */

int main(int argc, char *argv[])
{
	int fd, fd2, byt_rd, cls;
	char *buff = (char *)malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		exit(-1); }
	if (argc == 3)
	{
		fd = open(argv[1], O_RDONLY);
		byt_rd = read(fd, buff, 1024);
		if (fd < 0 || byt_rd < 0)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		fd2 = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, 0664);
		if (fd2 < 0)
			fd2 = open(argv[2], O_TRUNC | O_WRONLY);
		if (fd2 < 0)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99); }
		write(fd2, buff, byt_rd);
		cls = close(fd);
		if (cls < 0)
		{
			dprintf(2, "Error: Can't close fd %d\n", fd);
			exit(100); }
		cls = close(fd2);
		if (cls < 0)
		{
			dprintf(2, "Error: Can't close fd %d\n", fd2);
			exit(100); }
	}
	else
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97); }
	free(buff);
	return (1);
}
