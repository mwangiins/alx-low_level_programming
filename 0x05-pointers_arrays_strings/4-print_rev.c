#include "main.h"
/**
* print_rev - a function that prints a string, in reverse
* @s: string
* return: 0
*/
void print_rev(char *s)
{
int let = 0;
int c;

while (*s != '\0')
{
let++;
s++;
}
s--;
for (c = let; c > 0; c--)
{
putchar(*s);
s--;
}

putchar('\n');
}
