#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int let = 0;
	int b = 0;
	char *q = str;
	int r;

	while (*q != '\0')
	{
		q++;
		let++;
	}
	b = let - 1;
	for (r = 0 ; r <= b ; r++)
	{
	if (r % 2 == 0)
	{
		putchar(str[r]);
	}
	}
	putchar('\n');
}
