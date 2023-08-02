#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: pointer.
 * @letters: size_t.
 *
 * Return: Number of lettersit could be reading and printing.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd = 0, byt_read = 0, byt_write = 0;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd < 0)
		return (0);
	printf("\nread: %d\n", byt_read);
	buff = (char *)malloc(letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}

	byt_read = read(fd, buff, letters);
	if (byt_read < 0)
	{
		close(fd);
		free(buff);
		return (0);
	}

	printf("\nread: %d\n", byt_read);
	byt_write = write(STDOUT_FILENO, buff, byt_read);

	printf("\nread: %d write: %d\n", byt_read, byt_write);
	if (byt_read != byt_write)
	{
		close(fd);
		free(buff);
		return (0);
	}
	close(fd);
	free(buff);
	return (byt_read);
}
