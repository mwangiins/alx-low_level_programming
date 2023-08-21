#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: pointer
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
