#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the termina
 * @n: int
 * Return: nothing
 */
void print_diagonal(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar(92);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
_putchar('\n');
}
