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
int *p;

if (min > max)
{
return (NULL);
}

p = malloc(max * (sizeof(int)));
if (p == NULL)
{
return (NULL);
}

for (i = 0; min < max; i++)
{
p[i] = (min + i);
}

return (p);
}
