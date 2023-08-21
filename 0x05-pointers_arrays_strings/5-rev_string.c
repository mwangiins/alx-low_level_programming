#include "main.h"

/**
* rev_string - function that reverses a string
* @s: string
* Return: String in reverse
**/

void rev_string(char *s)
{
	char rev = s[0];
	int temp = 0;
	int c;

	while (s[temp] != '\0')
		temp++;
	for (c = 0; c < temp; c++)
	{
		temp--;
		rev = s[c];
		s[c] = s[temp];
		s[temp] = rev;
	}
}
