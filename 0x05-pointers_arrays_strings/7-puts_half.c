#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: string
 * Return: half of string
 */
void puts_half(char *str)
{
	int c, i, let;

	let = 0;

	for (c = 0; str[c] != '\0'; c++)
		let++;

	i = (let / 2);

	if ((let % 2) == 1)
		i = ((let + 1) / 2);

	for (c = i; str[c] != '\0'; c++)
		_putchar(str[c]);
	_putchar('\n');
}
