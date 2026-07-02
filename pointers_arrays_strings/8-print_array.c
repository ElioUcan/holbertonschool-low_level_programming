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
printf(a[n]);
n--;
}
}

