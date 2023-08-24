#include "main.h"

/**
  * print_number - a function that print an integer
  * @a: int
  * Return: void
  */

void print_number(int a)
{
	unsigned int num;

	num = a;

	if (a < 0)
	{
		_putchar('-');
		num = -a;
	}

	if (num / 10 != 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
