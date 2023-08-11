#include <stdio.h>
/**
 * main - prints numbers
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char numb = '0';
	char let = 'a';

	while (numb <= '9')
	{
		putchar(numb);
		numb++;
	}
	while (let <= 'f')
	{
		putchar(let);
		let++;
	}
	putchar('\n');
	return (0);
}
