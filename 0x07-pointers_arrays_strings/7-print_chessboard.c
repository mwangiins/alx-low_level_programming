#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 * @a: array in 2D
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int k, n;

	n = 0;
	while (n < 8)
	{
		k = 0;
		while (k < 8)
		{
			_putchar(a[n][k]);
			k++;
		}
		_putchar('\n');
		n++;
	}
}
