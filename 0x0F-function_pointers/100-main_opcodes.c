#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int size, c;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (c = 0; c < size; c++)
	{
		if (c == size - 1)
		{
			printf("%02hhx\n", array[c]);
			break;
		}
		printf("%02hhx ", array[c]);
	}
	return (0);
}
