#include "calc.h"
/**
 * get_op_func - function that selects the correct function
 * to perform the operation
 * @s: the operator
 * Return: a pointer to the function that corresponds to the operator
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
	int i = 0;

	while (i < 5)
	{
		if (*ops[i].op == *s)
		{
			return (*ops[i].f);
		}
		i++;
	}
	return (*ops[i].f);
}
