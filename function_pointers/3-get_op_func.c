#include "3-calc.h"
/**
 * get_op_func - gets the functions
 * @s: function
 * Return: int
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

for (i = 0; ops[i].op != NULL; i++)
{
if (ops[i].op[0] == s[0])
{
return (ops[i].f);
}
}
return (NULL);
}
