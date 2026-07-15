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
char *str;
va_start(chars, n);


while (i < n)
{
str = va_arg(chars, char *);

if (str != NULL && separator != NULL)
{
if ((n - 1) != i)
{
printf("%s", str);
printf("%s", separator);
}
else
{
printf("%s", str);
}
}
else
{
printf("(nil)");
}

i++;
}

va_end(chars);
putchar('\n');
}
