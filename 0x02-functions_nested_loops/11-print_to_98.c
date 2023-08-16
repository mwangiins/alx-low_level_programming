#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from y to 98
 * @y: print starting from this number
 *Return: 0
 */
void print_to_98(int y)
{
	int a, b;

	if (y <= 98)
	{
		for (a = y; a <= 98; a++)
		{
			if (a != 98)
				printf("%d, ", a);
			else if (a == 98)
				printf("%d\n", a);
		}
	} else if (y >= 98)
	{
		for (b = y; b >= 98; b--)
		{
			if (b != 98)
				printf("%d, ", b);
			else if (b == 98)
				printf("%d\n", b);
		}
	}
}
