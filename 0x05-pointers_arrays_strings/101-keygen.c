#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int a, jump, r;

	jump = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		pass[a] = rand() % 78;
		jump += (pass[a] + '0');
		putchar(pass[a] + '0');
		if ((2772 - jump) - '0' < 78)
		{
			r = 2772 - jump - '0';
			jump += r;
			putchar(r + '0');
			break;
		}
	}

	return (0);
}
