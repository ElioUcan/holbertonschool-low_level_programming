#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array
 * @a: int
 * @n: int
 * Return: nothing
 */

void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
if (a[i] != a[-1])
{
printf("%i, ", a[i]);
i++;
}
else
{
printf("%i\n", a[i]);
i++;
}
}
}
