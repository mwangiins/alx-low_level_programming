#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: ...
 */
void jack_bauer(void)
{
	int l, m;

       l = 0;

	while (l < 24)
	{
		l = 0;
		while (m < 60)
		{
			_putchar((l / 10) + '0');
			_putchar((l % 10) + '0');
			_putchar(':');
			_putchar((l / 10) + '0');
			_putchar((l % 10) + '0');
			_putchar('\n');
			m++;
		}
		l++;
	}
}
