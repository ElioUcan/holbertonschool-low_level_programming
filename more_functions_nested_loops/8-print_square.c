#include "main.h"
/**
 * print_square - prints a square
 * @size: size of square
 *
 * Return: nothing
 */

void print_square(int size)
{
int i;
int j;
if (size > 0)
{
for (i = 0; i < size ; i++)
{
for (j = 0; j <= i; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
_putchar('\n');
}
