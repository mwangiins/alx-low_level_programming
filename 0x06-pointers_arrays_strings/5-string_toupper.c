#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters of a string to uppercase
 * @d: string
 * Return: d
 */

char *string_toupper(char *d)
{
	int s;

	for (s = 0; d[s] != '\0'; s++)
	{
		if (d[s] > 96 && d[s] < 123)
		{
			d[s] -= 32;
		}
	}
	return (d);
}
