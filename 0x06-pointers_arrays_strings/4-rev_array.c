#include "main.h"

/**
 * reverse_array - a function that reverses the contents of an array of integers
 * @a: array
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
        int r;
        int s;

        for (r = 0; r < (n / 2); r++)
        {
                s = a[r];
                a[r] = a[n - r - 1];
                a[n - r - 1] = s;
        }
}
