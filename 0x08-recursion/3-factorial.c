#include "main.h"
/**
 * factorial - returns the factorial
 * @n: integer
 * Return: 0
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
