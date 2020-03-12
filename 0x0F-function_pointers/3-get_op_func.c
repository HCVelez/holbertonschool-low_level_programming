#include "3-calc.h"

/**
 * get_op_func - function to select correct operator function
 * @s: operator to pass to function
 * Return: pointer to corresponding function
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
		if (*(s) == *(ops[i].op) && s[i])
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
