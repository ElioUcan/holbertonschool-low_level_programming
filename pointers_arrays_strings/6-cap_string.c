#include "main.h"
/** 
 * cap_string - capitalized all the words
 * @str: value
 * Return: all capitalized words
 */
char *cap_string(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] >= 65 && str[i] <= 90)
{
str[i] = str[i] + 32;
}
i++;
}
return (str);
}