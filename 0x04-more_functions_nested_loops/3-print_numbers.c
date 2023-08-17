#include "main.h"
/**
* print_numbers -  prints the numbers from 0 - 9
*
* Return: 0
*/
void print_numbers(void)
{
char r = 0;
while (r <= 9)
{
_putchar(r + '0');
r++;
}
_putchar('\n');
}
