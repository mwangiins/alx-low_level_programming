#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main -  a program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array that contains the command line of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
