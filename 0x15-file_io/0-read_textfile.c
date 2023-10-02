#include "main.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile -  reads a text file and prints it
 * @filename: pointer to the name of file
 * @letters: number of letters to be read
 *
 * Return: the actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytr, bytw;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytr = read(fd, buffer, letters);
	if (bytr == -1)
	close(fd);
	{
		free(buffer);
		return (0);
	}
	bytw = write(STDOUT_FILENO, buffer, bytr);
	free(buffer);
	if (bytr != bytw)
		return (0);
	return (bytw);
}
