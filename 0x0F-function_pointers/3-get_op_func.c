#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func -  function to get structure and pointer function
 * @s: character +, -, /, *, %
 *
 * Return: NULL or Operator
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	i = 0;

	while (i < 5)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
