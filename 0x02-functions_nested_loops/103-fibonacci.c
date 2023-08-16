#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int a, b, fibo, var;

	a = 1;
	b = 2;
	var = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			var = var + a;
		}
		fibo = a + b;
		a = b;
		b = fibo;
	}

	printf("%lu\n", var);

	return (0);
}
