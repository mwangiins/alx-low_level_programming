#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: array of elements
 * @size: size of elements
 * @cmp: pointer to function
 * Return: If no element matches return -1
 *         If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (c = 0; c < size; c++)
	{
		if (cmp(array[c]))
			return (c);
	}
	return (-1);
}
