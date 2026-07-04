#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers.
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
int i;
int resultA = 0;
int resultB = 0;

for (i = 0; i <= size - 1; i++)
{
resultA += a[((i * size) + i)];
resultB += a[((i * size) + (size - 1 - i))];
}
printf("%i, %i\n", resultA, resultB);
}