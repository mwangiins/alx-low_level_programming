#include "main.h"
/**
 * string_toupper - a function that changes all lowercase letters of a string to uppercase
 * @b: pointer
 * Return: b
 */
char *string_toupper(char *b)
{
	int c;

	c = 0;
	while (b[c] != '\0')
	{
		if (b[c] >= 'a' && b[c] <= 'z')
			b[c] = b[c] - 32;
		c++;
	}
	return (b);
}
