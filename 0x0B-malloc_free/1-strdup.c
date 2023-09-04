#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer allocated space in the memory
 * Return: NULL if str = NULL
 * NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *ptr;
	int r, s = 0;

	if (str ==  NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		s++;
	ptr = malloc(sizeof(char) * (s + 1));
	if (ptr == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		ptr[r] = str[r];
	ptr[s] = '\0';

	return (ptr);

}
