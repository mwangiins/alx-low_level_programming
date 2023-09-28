#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int res = 0;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		res = 2 * res + (b[a] - '0');

	}
	return (res);
}
