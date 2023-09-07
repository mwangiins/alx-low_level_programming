#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pnt;
	unsigned int s;
	char *func;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pnt = malloc(nmemb * size);

	if (pnt == NULL)
	{
		return (NULL);
	}

	func = pnt;

	for (s = 0; s < (nmemb * size); s++)
	{
		func[s] = '\0';
	}
	return (pnt);
}
