#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: a pointer to the file name
 * @text_content: a pointer to the string
 * Return: 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int fd, bytw, length = 0;

	if (filename == 0)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	bytw = write(fd, text_content, length);

	if (fd == -1 || bytw == -1)
		return (-1);
	close(fd);

	return (1);
}
