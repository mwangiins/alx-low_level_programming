#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to file name
 * @text_content: pointer to a string
 *
 * Return: 1 if the file exists, -1 if it fails or does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int append;
	int wrt;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (append = 0; text_content[append]; append++)
			continue;
		wrt = write(fd, text_content, append);

		if (wrt == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

