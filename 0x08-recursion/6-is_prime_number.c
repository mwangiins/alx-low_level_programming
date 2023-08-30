#include "main.h"
/**
 * is_divisor - checks numbers that are divisible
 * @number: number to check
 * @div: divisor
 * Return: 0 if it is divisible
 */
int is_divisor(int number, int div)
{
	if (div > 1)
	if (number % div == 0)
		return (0);
	if (div == number / 2)
		return (1);
	return (is_divisor(number, div + 1));
}
/**
 * is_prime_number -  function that returns 1
 * @n: integer
 * Return: 0 when integer is not prime
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (is_divisor(n, div));
}
