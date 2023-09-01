#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: the string to be searched.
 * @c: char to be searched
 * Return: a pointer to the first occurrence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	int r;

	for (r = 0; s[r] >= '\0'; r++)
	{
		if (s[r] == c)
			return (s + r);
	}

	return ('\0');
}
