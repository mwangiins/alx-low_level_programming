#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * @...: variable number of parameters
 * Return: If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	unsigned int a, sum = 0;

	va_start(par, n);

	for (a = 0; a < n; a++)
		sum += va_arg(par, int);

	va_end(par);

	return (sum);
}
