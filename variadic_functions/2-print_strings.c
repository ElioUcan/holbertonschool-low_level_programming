#include "variadic_functions.h"
/**
 * print_strings - prints strings separated.
 * @separator: char
 * @n: unsigned int
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list chars;
unsigned int i = 0;

va_start(chars, n);


while (i < n)
{

if ((n - 1) != i)
{
printf("%s", va_arg(chars, char *));
printf("%s", separator);
}
else
{
printf("%s", va_arg(chars, char *));
}

i++;
}

va_end(chars);
putchar('\n');
}
