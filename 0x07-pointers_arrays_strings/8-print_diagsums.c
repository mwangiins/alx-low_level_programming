#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of diagonals of square
 * @a: array
 * @size: size
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	i = 0;
	sum1 = 0;
	sum2 = size * size;
	while (i < sum2)
	{
		if (i % (size + 1) == 0)
			sum1 += a[i];
		i++;
	}
	printf("%d, ", sum1);

	sum1 = 0;
	i = 0;
	while (i < sum2)
	{
		if (i % (size - 1) == 0 && i != (sum2 - 1) && i != 0)
			sum1 += a[i];
		i++;
	}
	printf("%d\n", sum1);
}
