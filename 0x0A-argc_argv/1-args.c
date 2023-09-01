#include "main.h"
#include <stdio.h>

/**
* main - a program that prints the number of arguments passed into it
* @argc: number of arguments
* @argv: array that contains the argument
* Return: 0
*/
int main(int argc, char *argv[])
{
int c;

if (argc == 1)
{
printf("%d\n", argc - 1);
}
else
{
for (c = 0; argv[c] != NULL; c++)
{
printf("%d\n", c - 1);
}
}
return (0);
}

