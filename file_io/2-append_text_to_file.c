#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Function thats appends text at the end of a file.
 * @filename: pointer.
 * @text_content: pointer.
 *
 * Return: 1 (Success), -1 Otherwise.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
		write(fd, text_content, strlen(text_content));

	return (1); 
}
