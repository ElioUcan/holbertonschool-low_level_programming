#include "main.h"
/**
 * leet - encodes a string
 * @str: value
 * Return: encoded string b
 */
char *leet(char *str)
{
int i;
int j;

char chars[] = "aAeEoOtTlL";
char numbers[] = "4433007711";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; chars[j] != 0 ; j++)
{
if (str[i] == chars[j])
{
str[i] = numbers[j];
}
}
}
return (str);
}
