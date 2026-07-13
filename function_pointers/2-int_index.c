#include "function_pointers.h"
/**
 * int_index - searches for an int
 * @array: array
 * @size: int
 * @cmp: int pointer function
 * Return: int value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
for (i = 0; i < size; i++)
{
cmp(array[i]);
}
}
