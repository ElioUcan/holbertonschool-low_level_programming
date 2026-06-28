#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: nothing
 */

void times_table(void)
{
int i;
int j;
int r;
for (i = 0; i <= 10; i++)
{
for (j = 0; j <= 10; j++)
{
if (j != 9)
{
r = j * i;
_putchar('0' + r / 10);
_putchar(',');
_putchar(' ');
}
else
{
_putchar('0' + r / 10);
}
}
_putchar('\n');
}
}
