#include "main.h"
/**
 * string_toupper - a function that changes all lowercase letters to uppercase
 * @s: string
 * Return: s
 */
char *string_toupper(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
	{
		if (s[c] >= 'a' && s[c] <= 'z')
			s[c] = s[c] - 32;
		c++;
	}
	return (s);
}
