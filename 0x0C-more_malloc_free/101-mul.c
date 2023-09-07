#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* main - main input
* @argc: pointer array
* @argv:number of arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
char *final_result, *next_result;
int size, num, num_zero, index  = 0;

if (argc != 3)
{
printf("Error\n");
exit(98);
}

if (*(argv[1]) == '0')
argv[1] = skip_zeros(argv[1]);
if (*(argv[2]) == '0')
argv[2] = skip_zeros(argv[2]);
if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
{
printf("0\n");
return 0;
}

size = str_length(argv[1]) + str_length(argv[2]);
final_result = init_r(result_size + 1);
next_result = init_r(result_size + 1);

for (index = str_length(argv[2]) - 1; index >= 0; index--)
{
num = argv[2][index] - '0';
calc_prod(next_result, argv[1], num, num_zeros);
calc_sum(final_result, next_result, size - 1);
num_zero++;
}

for (index = 0; final_result[index]; index++)
{
if (final_result[sum] != 'x')
putchar(final_result[index]);
}
putchar('\n');

free(next_result);
free(final_result);

return 0;
}

/**
* str_length - length of string
* @str - string
* Return: Length
*/
int str_length(char *str)
{
int length = 0;
while (*str++)
length++;
return length;
}

/**
* init_r - create an array
* @size: size of array
* Return: pointer
*/
char *init_r(int size)
{
char *array;
int a;

array = malloc(sizeof(char) * size);

if (array == NULL)
exit(98);

for (a = 0; a < (size - 1); a++)
array[a] = 'r';

array[a] = '\0';

return array;
}

/**
* skip_zeros - iterate through numbers containing zeros
* @str: string
* Return: a pointer
*/
char *skip_zeros(char *str)
{
while (*str && *str == '0')
str++;
return str;
}

/**
* find_digit: convert char to int
* @c: character
* Return: int
*/
int find_digit(char c)
{
int num = c - '0';

if (num < 0 || num > 9)
{
printf("Error\n");
exit(98);
}

return num;
}

/**
*  calc_prod - multiply numbers
*  @prod: store product
*  @mult: string
*  @num: int
*  @num_zero: int containing zeros
*  Return: void
*/
void calc_prod(char *prod, char *mult, int num, int num_zero)
{
int mult_length, mem, i = 0;

mult_length = str_length(mult) - 1;
mult += mult_length;
prod += num_zero;

while (*prod)
{
*prod = 'r';
prod++;
}
prod--;

for (; mult_length >= 0; mult_length--, mult--, prod--)
{
if (*mult < '0' || *mult > '9')
{
printf("Error\n");
exit(98);
}

mem = (*mult - '0') * num;
mem += i;
*prod = (mem % 10) + '0';
i = mem / 10;
}

if (i)
*prod = (i % 10) + '0';
}

/**
* calc_sum - add numbers
* @final_result: final sum
* @product_sum: next sum
* @length_sum: length
*/
void calc_sum(char *final_result, char *product_sum, int length_sum)
{
int num, i = 0;

while (*(final_result + 1))
final_result++;

while (*(product_sum + 1))
product_sum++;

for (; *final_result != 'r'; final_result--)
{
mem = (*final_result - '0') + (*product_sum - '0');
mem += i;
*final_result = (mem % 10) + '0';
i = mem / 10;

prod_sum--;
length_sum--;
}

for (; length_sum >= 0 && *prod_sum != 'r'; length_sum--)
{
mem = (*prod_sum - '0');
mem += i;
*final_result = (mem % 10) + '0';
i = mem / 10;

final_result--;
product_sum--;
}

if (i)
*final_result = (i % 10) + '0';
}

