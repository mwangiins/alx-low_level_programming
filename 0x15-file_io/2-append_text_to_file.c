#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: string to the file
 *
 * Return: 1 on success
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrt, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	wrt = write(fd, text_content, length);

	if (fd == -1 || wrt == -1)
		return (-1);

	close(fd);

	return (1);
}
