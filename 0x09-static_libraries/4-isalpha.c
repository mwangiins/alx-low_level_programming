#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 * @c: variable
 * Return: 1 if c is a letter
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
