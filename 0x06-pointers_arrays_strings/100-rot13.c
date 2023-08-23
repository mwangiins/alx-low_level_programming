#include "main.h"
#include <stdio.h>

/**
 * rot13 - a function that encodes a string using rot13
 * @s: pointer
 * Return: s address
 */

char *rot13(char *s)
{
	int x;
	int y;
	char g[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char h[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == g[y])
			{
				s[x] = h[y];
				break;
			}
		}
	}
	return (s);
}
