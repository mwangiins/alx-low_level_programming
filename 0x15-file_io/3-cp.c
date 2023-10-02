#include "main.h"

/**
 * error_in - checks files
 * @file_from: checks file source
 * @file_to: checks file destination
 * @argv: arguments passed
 * Return: 1
 */
void error_in(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - the main function
 * @argc: arguments count
 * @argv: arguments passed
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t len, wrt;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_in(file_from, file_to, argv);

	len = 1024;
	while (len == 1024)
	{
		len = read(file_from, buffer, 1024);
		if (len == -1)
			error_in(-1, 0, argv);
		wrt = write(file_to, buffer, len);
		if (wrt == -1)
			error_in(0, -1, argv);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
