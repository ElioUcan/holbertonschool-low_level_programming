#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 *  and initializes it with a specific char.
 * @size: int
 * @c: char
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size < 1)
{
return (NULL);
}
arr = malloc(size * sizeof(c));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i <size; i++)
{
arr[i] = c;
}
return (arr);
}
