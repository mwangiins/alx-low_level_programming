#include <stdio.h>
/**
 * main - main input print alphabets in reverse mode
 *
 * Return: always 0
 *
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
		putchar('\n');
		return (0);
}
