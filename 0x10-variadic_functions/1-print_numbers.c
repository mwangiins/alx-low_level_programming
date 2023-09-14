#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers -  a function that prints numbers
 * @separator: string to be printed
 * @n: number of arguments
 * @...: a variable
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list digit;
	unsigned int a;

	va_start(digit, n);

	for (a = 0; a < n; a++)
	{	printf("%d", va_arg(digit, int));
	if (a != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");

	va_end(digit);

}
