#include "main.h"
/**
 * swap_int - swaps values
 * @a: pointer a
 * @b: pointer b
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
