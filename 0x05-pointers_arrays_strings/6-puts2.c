#include "main.h"
/**
* puts2 - a function that prints every other character of a string
* starting with the first one
* @str: input
* Return: print
*/
void puts2(char *str)
{
int let = 0;
int b = 0;
char *q = str;
int r;

while (*q != '\0')
{
q++;
let++;
}
b = let - 1;
for (r = 0 ; r <= b ; r++)
{
if (r % 2 == 0)
{
_putchar(str[r]);
}
}
_putchar('\n');
}
