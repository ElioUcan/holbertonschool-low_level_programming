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
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
r = j * i;
if (j != 0)
{
_putchar(',');
_putchar(' ');
}
if (r >=10)
{
_putchar('0' + r / 10);
}
else if ( j != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar('0' + r % 10);
}
_putchar('\n');
}
}
