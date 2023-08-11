#include <stdio.h>
/**
 * main - print alphabets without char and use putchar
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	int c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
		putchar('\n');
		return (0);
}
