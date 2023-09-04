#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 * @size: int
 * @c: char
 * Return: NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		array[a] = c;
	return (array);
}
