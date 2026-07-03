#include "main.h"
/**
 * cap_string - capitalized all the words
 * @str: value
 * Return: all capitalized words
 */
char *cap_string(char *str)
{
int i = 0;
int j;
char symbols[] = " \t\n,;.!?\"(){}";
while (str[i] != '\0')
{
if (str[i] >= 97 && str[i] <= 122)
{
if (i == 0)
{
str[i] = str[i] - 32;
}
else
{
for (j = 0; symbols[j] != '\0'; j++)
{
if (str[i - 1] == symbols[j])
{
str[i] -= 32;
}
}
}
}
i++;
}
return (str);
}
