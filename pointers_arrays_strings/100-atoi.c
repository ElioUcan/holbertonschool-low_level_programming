#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: str converted to int.
 */

int _atoi(char *s)
{
int sign = 1;
int number = 0;
int i = 0;
unsigned int res = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
{
sign *= -1;
}
if (s[i] >= '0' && s[i] <= 9)
{
res = (res * 10) + (s[i] - '0');
number = 1;
}
else if (number == 1)
{
break;
}
i++;
}
return (res * sign);
}
