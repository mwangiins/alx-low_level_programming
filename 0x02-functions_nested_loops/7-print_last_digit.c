#include "main.h"

/**
* print_last_digit - prints the last digit
* @n: the int
* Return: value of the last digit
*/
int print_last_digit(int n)
{
int y;

if (n < 0)
n = -n;

y = n % 10;

if (y < 0)
y = -y;

_putchar(y + '0');

return (y);
}
