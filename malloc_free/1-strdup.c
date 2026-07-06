#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *  which contains a copy of the string given as a parameter.
 * @str: string
 * Return: char
 */

char *_strdup(char *str)
{
char *copy;
unsigned int size = 0;
int i;

if (str == NULL)
{
return (NULL);
}

while (str[size] != '\0')
{
size++;
}

copy = malloc((size + 1) * sizeof(str));

if (copy == NULL)
{
return (NULL);
}

for (i = 0; i <= size; i++)
{
copy[i] = str[i];
}

return (copy);
}
