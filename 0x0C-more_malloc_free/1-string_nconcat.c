#include <stdlib.h>
#include "main.h"
/**
* string_nconcat - a function that concatenates two strings
* @s1: first string
* @s2: second string
* @n: number of bytes
* Return: NULL If the function fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *con;
unsigned int len1, len2, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; s1[i]; i++)
len1++;

for (i = 0; s2[i] && i < n; i++)
len2++;

con = malloc(sizeof(char) * (len1 + len2 + 1));
if (con == NULL)
return (NULL);

for (i = 0; s1[i]; i++)
con[i] = s1[i];

for (j = 0; s2[j] && j < n; j++)
con[i + j] = s2[j];

con[i + j] = '\0';

return (con);
}

