#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: string
 * @src: char type
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int p = 0;
	int y = 0;

	while (*(src + p) != '\0')
	{
		p++;
	}
	for ( ; y < p ; y++)
	{
		dest[y] = src[y];
	}
	dest[p] = '\0';
	return (dest);
}
