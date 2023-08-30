#include "main.h"

int _strlen_recursion(char *s);
int check_pal(char *s, int length, int c);
int is_palindrome(char *s);

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*(s + length))
	{
		length++;
		length += _strlen_recursion(s + length);
	}

	return (length);
}

/**
 * check_pal - checks for a palindrome in a string
 * @s: string
 * @length: the length of s.
 * @c: string to be checked.
 * Return: if the string is a palindrome - 1
 */
int check_pal(char *s, int length, int c)
{
	if (s[c] == s[length / 2])
		return (1);

	if (s[c] == s[length - c - 1])
		return (check_pal(s, length, c + 1));

	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: string.
 * Return: if the string is a palindrome - 1
 */
int is_palindrome(char *s)
{
	int c = 0;
	int length = _strlen_recursion(s);

	if (!(*s))
		return (1);

	return (check_pal(s, length, c));
}
