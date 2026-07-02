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
while( n != 0)
{
if (a[n] != a[-1])
{
printf("%i, ",a[n]);
n--;
}
else
{
printf("%i\n",a[n]);
n--;
}
}
}

