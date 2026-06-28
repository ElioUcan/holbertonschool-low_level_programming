#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints the number till 98
 *
 * Return: nothing
 */


void print_to_98(int n)
{
while (n <= 98)
{
if (n == 98)
{
printf("%i ", n);
break; 
}
printf("%i, ", n);
n++;
}
}
