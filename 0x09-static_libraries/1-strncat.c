#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: pointer
 * @src: pointer
 * @n: byte
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int c;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	c = 0;
	while (c < n && src[c] != '\0')
	{
	dest[a] = src[c];
	a++;
	c++;
	}
	dest[a] = '\0';
	return (dest);
}
