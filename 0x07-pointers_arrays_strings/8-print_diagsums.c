#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  a function that prints the sum of the two diagonals of a square matrix of integers
 * @a: pointer
 * @size: size
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int s, sum1 = 0, sum2 = 0;

	for (s = 0; s < size; s++)
	{
		sum1 += a[s];
		a += size;
	}

	a -= size;

	for (s = 0; s < size; s++)
	{
		sum2 += a[s];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
