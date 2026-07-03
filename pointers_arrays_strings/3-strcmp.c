#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: value 1
 * @s2: value 2
 * Return: int value
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
int j = 0;
while (s1[i] == s2[i] && s2[i] != '\0')
{
i++;
}
j = s1[i] - s2[i];
return (j);
}
