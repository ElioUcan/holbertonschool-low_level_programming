#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints the number till 98
 * @n: int value
 *
 * Return: nothing
 */


void print_to_98(int n)
{
if (n > 98)
{
while (n >= 98)
{
if (n == 98)
{
printf("%i\n", n);
break;
}
printf("%i, ", n);
n--;
}
}
else
{
while (n <= 98)
{
if (n == 98)
{
printf("%i\n", n);
break;
}
printf("%i, ", n);
n++;
}
}
}
