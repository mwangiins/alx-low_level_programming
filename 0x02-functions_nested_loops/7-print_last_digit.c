#include "main.h"
/**
 *print last_digit - Print last digit
 *@r: number to be extracted
 * Return: Value of the last digit
 */

int print_last_digit(int r)
{
int var;

var = r % 10;
if (var < 0)

{
var = var * -1;
}
_putchar(var + '0');
return (var);
}
