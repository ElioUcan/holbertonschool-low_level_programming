#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a separator
 * @separator: char
 * @n: unsigned int
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list numb;
unsigned int i = 0;
va_start(numb, n);

if (separator == NULL)
{
while (i < n)
{
printf("%i", va_arg(numb, int));
i++;
}
}
else
{
while (i < n)
{
if ((n - 1) == i)
{
printf("%i", va_arg(numb, int));
}
else
{
printf("%i", va_arg(numb, int));
printf("%s", separator);
}
i++;
}
}
putchar('\n');

}
