#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concat two strings
 * @s1: string 2
 * @s2: string 1
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
int size = 0;
int i = 0;
int j = 0;
char *concatenate;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i] != '\0')
{
size++;
i++;
}
i = 0;
while (s2[i] != '\0')
{
size++;
i++;
}
concatenate = malloc((size + 1) * sizeof(char));
if (concatenate == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
concatenate[i] = s1[i];
}
for (j = 0; s2[j] != '\0'; j++)
{
concatenate[i] = s2[j];
i++;
}
concatenate[i] = '\0';
return (concatenate);
}
