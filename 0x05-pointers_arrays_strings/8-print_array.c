#include "main.h"

/**
 * print_array - a function that print n elements of an array of integers
 * @a: array pointer
 * @n: integer
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int c;

	c = 0;
	for (n--; n >= 0; n--, c++)
	{
		printf("%d", a[c]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
