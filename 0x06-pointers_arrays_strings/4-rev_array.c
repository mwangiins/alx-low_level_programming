#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: array
 * @n: int
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int r;
	int s;

	for (r = 0; r < n--; r++)
	{
		s = a[r];
		a[r] = a[n];
		a[n] = s;
	}
}
