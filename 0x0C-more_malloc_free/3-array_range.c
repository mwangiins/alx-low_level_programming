#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum range
 * @max: maximum range
 * Return: NULL if min > max
 */
int *array_range(int min, int max)
{
	int *pnt, r, s;

	if (min > max)
		return (NULL);
	s = max - min + 1;

	pnt = malloc(sizeof(int) * s);

	if (pnt == NULL)
		return (NULL);
	for (r = 0; min < max; r++)
		pnt[r] = min++;
	return (pnt);
}
