#include <stdio.h>
/**
 * main - prints digits
 *
 * Return: always 0
 *
 */
int main(void)
{
	int i, r;
	int a, b, c, d;

	for (i = 0; i < 99; i++)
	{
		a = i / 10;
		b = i % 10;

		for (r = 0; r < 99; r++)
		{
			c = r / 10;
			d = r % 10;

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}