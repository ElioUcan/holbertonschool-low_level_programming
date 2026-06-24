#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: 0 if correct
 */
int main(void)
{
int i;

for (i = 48; i <= 57; i++)
{
if (i != 57)
{
putchar(i);
putchar(',');
putchar(' ');
}
else
{
putchar(i);
}
}
return (0);
}
