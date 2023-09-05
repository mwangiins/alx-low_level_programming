#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - length of string
 * @str: the string
 * Return: 0
 */
int word_len(char *str)
{
	int size = 0, length = 0;

	while (*(str + size) && *(str + size) != ' ')
	{
		length++;
		size++;
	}

	return (length);
}

/**
 * word_count - function that counts words
 * @str: string
 * Return: number of words
 */
int word_count(char *str)
{
	int size = 0, index = 0, length = 0;

	for (size = 0; *(str + size); size++)
		length++;

	for (size = 0; size < length; size++)
	{
		if (*(str + size) != ' ')
		{
			index++;
			size += word_len(str + size);
		}
	}

	return (index);
}

/**
 * strtow - a function that splits a string into words
 * @str: string
 * Return: NULL if str = NULL, str = ""
 */
char **strtow(char *str)
{
	char **stng;
	int index, r, i, size,  s;

	size = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	index = word_count(str);
	if (index == 0)
		return (NULL);

	stng = malloc(sizeof(char *) * (index + 1));
	if (stng == NULL)
		return (NULL);

	for (r = 0; r < index; r++)
	{
		while (str[size] == ' ')
			size++;

		i = word_len(str + size);

		stng[r] = malloc(sizeof(char) * (i + 1));

		if (stng[r] == NULL)
		{
			for (; r >= 0; r--)
				free(stng[r]);

			free(stng);
			return (NULL);
		}

		for (s = 0; s < i; s++)
			stng[r][s] = str[size++];

		stng[r][s] = '\0';
	}
	stng[r] = NULL;

	return (stng);
}
