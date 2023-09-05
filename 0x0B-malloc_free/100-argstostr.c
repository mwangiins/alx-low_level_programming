#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: argument int
 * @av: double pointer array
 * Return: NULL if ac == 0
 */
char *argstostr(int ac, char **av)
{
	char *len;
	int a, r, s = 0;
	int i = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (r = 0; av[a][r]; r++)
			i++;

	}
	len = malloc(sizeof(char) * i + 1);
	if (len == NULL)
		return (NULL);
	s = 0;

	for (a = 0; a < ac; a++)
	{
		for (r = 0; av[a][r]; r++)
			len[s++] = av[a][r];
		len[s++] = '\n';
	}
	len[i] = '\0';
	return (len);
}
