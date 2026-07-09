#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: int pointer
 * @s2: int pointer
 * @n: unsingned int
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i = 0;
int j = 0;
int k = 0;
char *arr;

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
i++;
}
i += n;
arr = malloc((i + 1) * (sizeof(char)));
if (arr == NULL)
{
return (NULL);
}
for (j = 0; j <= i; j++)
{
if (s1[j] != '\0' && k <= 0)
{
arr[j] = s1[j];
}
else
{
arr[j] = s2[k];
k++;
}
}
arr[i] = '\0';
return (arr);
}
