#include "main.h"
/**
 * rev_string - reverses a string
 * @s: char
 * Return: nothing
 */

void rev_string(char *s)
{
int i = 0;
int j = 0;
char t;

while (s[i] != '\0')
{
i++;
}
i--;

while (j < i)
{
t = s[j];
s[j] = s[i];
s[i] = t;

i--;
j++;
}
}
