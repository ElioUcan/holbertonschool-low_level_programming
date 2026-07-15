#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all the number of argumenrs
 * @n: int
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
va_list numb;
int total = 0;
unsigned int i = 0;
if (n == 0)
{
return (0);
}
va_start(numb, n);

while (i <= n)
{
total += va_arg(numb, int);
i++;
}
va_end(numb);
return (total);
}
