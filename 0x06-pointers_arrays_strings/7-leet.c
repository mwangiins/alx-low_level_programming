#include "main.h"
/**
 * leet - encodea string into 1337
 * @z: int
 * Return: z value
 */
char *leet(char *z)
{
	int m, n;
	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	for (m = 0; z[m] != '\0'; m++)
	{
		for (n = 0; n < 10; n++)
		{
			if (z[m] == c[n])
			{
				z[m] = d[n];
			}
		}
	}
	return (z);
}
