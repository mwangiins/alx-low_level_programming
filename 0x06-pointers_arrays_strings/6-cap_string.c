#include "main.h"

/**
 * cap_string -  a function that capitalizes all words of a string
 * @str: string
 * Return: pointer
 */
char *cap_string(char *str)
{
	int pos = 0;

	while (str[pos])
	{
		while (!(str[pos] >= 'a' && str[pos] <= 'z'))
			pos++;

		if (str[pos - 1] == ' ' ||
		    str[pos - 1] == '\t' ||
		    str[pos - 1] == '\n' ||
		    str[pos - 1] == ',' ||
		    str[pos - 1] == ';' ||
		    str[pos - 1] == '.' ||
		    str[pos - 1] == '!' ||
		    str[pos - 1] == '?' ||
		    str[pos - 1] == '"' ||
		    str[pos - 1] == '(' ||
		    str[pos - 1] == ')' ||
		    str[pos - 1] == '{' ||
		    str[pos - 1] == '}' ||
		    pos == 0)
			str[pos] -= 32;

		pos++;
	}

	return (str);
}
