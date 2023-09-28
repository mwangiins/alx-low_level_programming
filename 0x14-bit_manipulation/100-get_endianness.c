#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 *
 * Return: 0 if big endian
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *s = (char *) &a;

	return (*s);
}
