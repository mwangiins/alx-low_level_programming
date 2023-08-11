#include <stdio.h>
/**
 * main - print numbers
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
