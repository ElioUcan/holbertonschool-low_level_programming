#include "3-calc.h"
#include <stdio.h>

/**
 * main - invoques all the functions
 * @args: the number of arguments
 * @expr: the expression
 * Return: 0 if correct.
 */

int main(int args, char *expr[])
{
int num1;
int num2;
int result;
int (*f)(int, int);
if (args != 4)
{
printf("Error\n");
return (98);
}
num1 = atoi(expr[1]);
num2 = atoi(expr[3]);
f = get_op_func(expr[2]);
if (f == NULL)
{
printf("Error\n");
return (99);
}
if ((*expr[2] == '/' || *expr[2] == '%') && num2 == 0)
{
printf("Error\n");
return (100);
}
result = f(num1, num2);
printf("%i\n",result);
return (0);
}
