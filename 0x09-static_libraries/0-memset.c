#include "main.h"
/**
 *_memset - a function that fills memory with a constant byte
 *@s: pointer
 *@b: value
 *@n: integer
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c = 0;

	for (; n > 0; c++)
	{
		s[c] = b;
		n--;
	}
	return (s);
}
