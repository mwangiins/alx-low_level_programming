#include "main.h"

/**
 * _atoi - a function that convert a string to an integer
 * @s: string
 *
 * Return: 0
 */
int _atoi(char *s)
{
	int a, b, i, let, g, num;

	a = 0;
	b = 0;
	i = 0;
	let = 0;
	g = 0;
	num = 0;

	while (s[let] != '\0')
		let++;

	while (a < let && g == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			num = s[a] - '0';
			if (b % 2)
				num = -num;
			i = i * 10 + num;
			g = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			g = 0;
		}
		a++;
	}

	if (g == 0)
		return (0);

	return (i);
}
