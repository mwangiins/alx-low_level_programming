#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip
 * @n: first unsigned long int
 * @m: second unsigned long int
 *
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int find = 0;
	unsigned long int res = n ^ m;

	while (res > 0)
	{
		find += res & 1;
		res >>= 1;
	}
	return (find);
}
