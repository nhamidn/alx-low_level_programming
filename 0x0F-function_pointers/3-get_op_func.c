#include "3-calc.h"

/**
 * get_op_func - A function that select the correct
 * function for the calculation
 * @s: the operator
 * Return: a pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;
	while (ops[i].op)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	return (0);
}
