#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer, 
 * starting from 00:00 to 23:59.
 *
 * Retunrn: nothing
 */

 void jack_bauer(void)
{
int i;
int j;
for (i = 0; i < 24; i++)
{
for (j = 0; j < 60; j++)
{
if (i < 10 && j < 10)
{
_putchar('0');
_putchar('0' + i);
_putchar(':');
_putchar('0');
_putchar('0' + j);
}
_putchar('\n');
}
}
}
