#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: pointer
 *@src: stored memory
 *@n: size of bytes
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int c = 0;
	int a = n;

	for (; c < a; a++)
	{
		dest[c] = src[c];
		n--;
	}
	return (dest);
}
