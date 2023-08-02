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
	char buff[10000];
	int fd = 0, byt_read = 0;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	byt_read = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, byt_read);
	close(fd);
	return (byt_read);
}
