#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int r, s, t;

	for (r = 0; r < 10; r++)
	{
		for (s = 0; s < 10; s++)
		{
			t = s * r;
			if (s == 0)
			{
				_putchar(t + '0');
			}

			if (t < 10 && s != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(t + '0');
			} else if (t >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((t / 10) + '0');
				_putchar((t % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
