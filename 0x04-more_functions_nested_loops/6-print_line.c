#include "main.h"
/**
* print_line -  a function that draws a straight line in the terminal
* @n: variable
*
*/
void print_line(int n)
{
int c;
for (c = 0; c < n; c++)
{
if (n > 0)
{
_putchar('_');
}
}
_putchar('\n');
}
