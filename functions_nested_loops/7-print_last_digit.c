#include "main.h"

/**
 * print_last_digit - prints the last number
 * @v: number
 *
 * Return: Returns the value of the last digit
 */
int print_last_digit(int v)
{
v %= 10;
if (v < 0)
{
v *= -1;
}
_putchar('0' + v);
return (v);
}
