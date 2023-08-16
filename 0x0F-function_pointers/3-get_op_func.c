#include "3-calc.h"
/**
 * get_op_func - function
 * @s: string
 * Return: integer
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

	for (i = 0; i < 5; i++)
	{
		if (s && s[0] == ops[i].op[0] && !s[1])
			return (ops[i].f);
	}
	return (NULL);
}
