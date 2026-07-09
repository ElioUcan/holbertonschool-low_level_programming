#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: int
 * @max: int
 * Return: int pointer
 */
int *array_range(int min, int max)
{
int i;
int size = max - min + 1;
int *p;

if (min > max)
{
return (NULL);
}

p = malloc((size) * (sizeof(int)));
if (p == NULL)
{
return (NULL);
}

for (i = 0; min <= size; i++)
{
p[i] = min;
min++;
}

return (p);
}
