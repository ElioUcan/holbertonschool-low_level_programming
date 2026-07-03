#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: int value
 * @n: int value
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
int i = 0;
for (; n > 0; n--)
{
a[i] = a[n];
i++;
}
}
