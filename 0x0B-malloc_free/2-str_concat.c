#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: input 1
 * @s2: input 2
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	int r, s, a;

	r = 0;
	s = 0;
	a = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (r = 0; s1[r] || s2[r]; r++)
		a++;
	con = malloc(sizeof(char) * a);
	if (con == NULL)
		return (NULL);
	for (r = 0; s1[r]; r++)
		con[s++] = s1[r];
	for (r = 0 ; s2[r]; r++)
		con[s++] = s2[r];
	return (con);
}
