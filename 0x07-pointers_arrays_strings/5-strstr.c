#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: string
 * @needle: pointer
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	int r, s, t;

	r = 0;
	t = 0;
	while (haystack[r] != '\0')
	{
		s = 0;
		while (needle[s + t] != '\0' && haystack[r + t] != '\0'
		       && needle[s + t] == haystack[r + t])
		{
			if (haystack[r + t] != needle[s + t])
				break;
			t++;
		}
		if (needle[s + t] == '\0')
			return (&haystack[r]);
		s++;
		r++;
	}

	return (0);
}
