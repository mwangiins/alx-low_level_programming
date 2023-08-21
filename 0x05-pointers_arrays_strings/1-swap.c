#include "main.h"
/**
* swap_int -  a function that swaps the values of two integers
* @a: pointer 1
* @b: pointer 2
*/
void swap_int(int *a, int *b)
{
int y;

y = *a;
*a = *b;
*b = y;
}
