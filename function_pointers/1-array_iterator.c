#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - iters over an specified function.
 * @array: int
 * @size: size_t
 * @action: function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
for (i = 0; i <= size; i++)
{
action(array[i]);
}
}

