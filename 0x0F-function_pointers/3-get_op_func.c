#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - pointer selects the correct function to perform the operation 
 * @s: The operator passed as argument.
 *
 * Return: A pointer to the function that corresponds
 *         to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int c = 0;

	while (ops[c].op != NULL && *(ops[i].op) != *s)
		c++;

	return (ops[c].f);
}
