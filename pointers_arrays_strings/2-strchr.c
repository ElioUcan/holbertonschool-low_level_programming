#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a char in a string
 * @s: string
 * @c: char
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
int i = 0;
if (s == NULL)
{
return (NULL);
}
while (1)
{
if (s[i] == c)
{
return (&s[i]);
}
if (s[i] == '\0')
{
return (NULL);
}
i++;
}
}
