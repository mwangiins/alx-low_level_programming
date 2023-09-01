#include <stdio.h>
#include "main.h"
/**
 * main -  a program that prints the number of arguments
 * @argc: number of arguments
 * @argv: array containing the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void)argv;
if (argc == 1)
{
printf("0\n");
}
else
{
printf("%d\n", argc - 1);
}

return (0);
}
