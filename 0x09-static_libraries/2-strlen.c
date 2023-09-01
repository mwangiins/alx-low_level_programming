#include "main.h"
/**
* _strlen - a function that returns the length of a string
* @s: string
* Return: length of a string
*/
int _strlen(char *s)
{
int c = 0;

while (*s)

{
c++;
s++;
}
return (c);
}
