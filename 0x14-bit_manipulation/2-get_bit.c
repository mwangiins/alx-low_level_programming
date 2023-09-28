#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to extract
 * @index: index of bit
 *
 * Return: the value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int res;
	unsigned int num = sizeof(unsigned long int) * 8;

	if (index >= num)
		return (-1);

	res = (n >> index) & 1;

	return (res);
}
