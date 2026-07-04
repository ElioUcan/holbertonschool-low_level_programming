#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: char
 * @accept: accept list
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0;
int j;

if (s == NULL)
{
return (NULL);
}

while (s[i] != '\0')
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (&s[i]);
}
}
i++;
}
return (NULL);
}
