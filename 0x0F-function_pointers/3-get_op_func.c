#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - fetches the correct arithmetic operation to
 * be executed
 * @s: holds address of required operation
 * Return: pointer to function that will perform corresponding
 * operation
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 6)
	{
		if (*(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (ops[i].f);
}
