#include <stdio.h>
/**
 * main - prints numbers of base
 *
 * Return: always 0
 *
 */
int main(void)
{
	char i = '0';
	char c = 'a';

	while (i <= '9')
	{
		putchar(i);
		c++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
