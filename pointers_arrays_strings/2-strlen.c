#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: char value
 * Return: the length
 */

int _strlen(char *s)
{
int i;

while (s[i] != '\n')
{
i++;
}
return (i);
}

