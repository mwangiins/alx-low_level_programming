#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result of simple operations.
 * @argc: number of arguments
 * @argv: An array of pointers
 *
 * Return: Always 0.
 */
int main(int _attribute((unused_)) argc, char *argv[])
{
	int num1, num2;
	char *opr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	opr = argv[2];
	num2 = atoi(argv[3]);

	if (get_opr_func(op) == NULL || opr[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*opr == '/' && num2 == 0) ||
	    (*opr == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_opr_func(opr)(num1, num2));

	return (0);
}
