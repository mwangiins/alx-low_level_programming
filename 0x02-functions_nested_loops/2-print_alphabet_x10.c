#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times, in lowercase
 * Return: void
 */

void print_alphabet_x10(void)
{
char i;
int r;
r = 0;
while (r < 10)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
r++;
}

}
