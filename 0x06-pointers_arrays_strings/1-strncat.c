#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: pointer
 * @src: pointer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c;

	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}	
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
