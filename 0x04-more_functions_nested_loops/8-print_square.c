#include "main.h"
/**
* print_square -  a function that prints a square
* @size: variable
*
*/
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int c, d;
for (c = 0; c < size; c++)
{
for (d = 0; d < size; d++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
