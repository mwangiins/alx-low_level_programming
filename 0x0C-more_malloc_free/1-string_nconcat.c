#include <stdio.h>
#include <stdlib.h>
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
unsigned int pos, i;
i = 0;
pos = n;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i]; i++)
pos++;
con = malloc(sizeof(char) * (pos + 1));
if (con == NULL)
return (NULL);
pos = 0;

for (i = 0; s1[i]; i++)
con[pos++] = s1[i];
for (i = 0; s2[i] && i < n; i++)
con[pos++] = s2[i];
con[pos] = '\0';

return (con);
}
