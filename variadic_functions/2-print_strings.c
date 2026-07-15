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
va_start(chars, n);
unsigned int i = 0;
char checker[] = "1234567890";


if (separator == NULL)
{
while (i < n)
{
if (va_arg(chars, char) != checker[i])
{
printf("%s", va_arg(chars, char));
i++;
}
}
}

else
{
while (i < n)
{
if (va_arg(chars, char) != checker[i])
{
if ((n - 1) == i)
{
printf("%s", va_arg(chars, char));
}
else
{
printf("%s", va_arg(chars, char));
printf("%s", separator);
}
}
i++;
}
putchar('\n');
}
}
