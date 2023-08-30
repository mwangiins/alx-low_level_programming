#include "main.h"
/**
* find_sqrt - finds the naturall square root
* @number: the number to find
* @sqroot: the square root
* Return: if it does not have a natural square root return  -1.
*/
int find_sqrt(int number, int sqroot)
{
if ((sqroot * sqroot) == number)
return (sqroot);

if (sqroot == number / 2)
return (-1);

return (find_sqrt(number, sqroot + 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: integer
* Return: if n does not have a natural square root return -1
*/
int _sqrt_recursion(int n)
{
int sqroot = 0;

if (n < 0)
return (-1);

if (n == 1)
return (1);

return (find_sqrt(n, sqroot));
}
