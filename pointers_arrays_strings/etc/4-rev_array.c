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
int right = n - 1;
int b;

while (i < right)
{
b = a[i];
a[i] = a[right];
a[right] = b;
i++;
right--;
}
}
