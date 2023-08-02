#include "main.h"
#include <string.h>

/**
 * create_file - Function that creates a file.
 * @filename: pointer.
 * @text_content: pointer.
 *
 * Return: 1 (Success), -1 otherwise.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
		write(fd, text_content, strlen(text_content));
	else
		write(fd, "", 0);

	return (1);
}
