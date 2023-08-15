#include "main.h"

/**
 * _abs -  computes the absolute value of an integer
 * @a: the integer to be checked
 * Return: absolute value of number
 */
int _abs(int a)

{

if (a < 0)
{
int abs_ing;

abs_ing = a * -1;
return (abs_ing);
}
return (a);
}
