#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * _print - string
 * @str: string to move
 * @l: size of string
 *
 * Return: void
 */
void _print(char *str, int l)
{
	int r, s;

	r = s = 0;
	while (r < l)
	{
		if (str[r] != '0')
			s = 1;
		if (s || r == l - 1)
			_putchar(str[r]);
		r++;
	}

	_putchar('\n');
	free(str);
}

/**
 * mul - multiplies two positive numbers
 * @n: char
 * @num: string
 * @num_index: index of num
 * @dest: destination
 * @dest_index: index
 *
 * Return: NULL on failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int s, i, multi, prod, sum, sumof;

	prod = sumof = 0;
	for (s = num_index, i = dest_index; s >= 0; s--, i--)
	{
		multi = (n - '0') * (num[s] - '0') + prod;
		prod = multi / 10;
		sum = (dest[i] - '0') + (multi % 10) + sumof;
		sumof = sum / 10;
		dest[i] = sum % 10 + '0';
	}
	for (sumof += prod; i >= 0 && prod; i--)
	{
		sum = (dest[i] - '0') + sumof;
		sumof = sum / 10;
		dest[i] = sum % 10 + '0';
	}
	if (sumof)
	{
		return (NULL);
	}
	return (dest);
}
/**
 * check_for_digits - checks the arguments
 * @av: pointer
 *
 * Return: 0 if digits is found
 */
int check_for_digits(char **av)
{
	int r, s;

	for (r = 1; r < 3; r++)
	{
		for (s = 0; av[r][s]; s++)
		{
			if (av[r][s] < '0' || av[r][s] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - initializes a string
 * @str: sting
 * @l: length
 *
 * Return: void
 */
void init(char *str, int l)
{
	int r;

	for (r = 0; r < l; r++)
		str[r] = '0';
	str[r] = '\0';
}

/**
 * main - multiply
 * @argc: number of arguments
 * @argv: argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int len1, len2, j, k, r;
	char *ar;
	char *c;
	char v[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (k = 0; v[k]; k++)
			_putchar(v[k]);
		exit(98);
	}
	for (len1 = 0; argv[1][len1]; len1++)
		;
	for (len2 = 0; argv[2][len2]; len2++)
		;
	j = len1 + len2 + 1;
	ar = malloc(j * sizeof(char));
	if (ar == NULL)
	{
		for (k = 0; v[k]; k++)
			_putchar(v[k]);
		exit(98);
	}
	init(ar, j - 1);
	for (k = len2 - 1, r = 0; k >= 0; k--, r++)
	{
		c = mul(argv[2][k], argv[1], len1 - 1, ar, (j - 2) - r);
		if (c == NULL)
		{
			for (k = 0; v[k]; k++)
				_putchar(v[k]);
			free(ar);
			exit(98);
		}
	}
	_print(ar, j - 1);
	return (0);
}
