#include "main.h"
#include <unistd.h>
/**
 * puts_half - prints half the string
 * @str: char
 * Return: nothing
 */

void puts_half(char *str)
{
int i = 0;
int j = 0;
while (str[i] != '\0')
{
i++;
}
for (str[i] != '\0')
{
if (i == j)
{
break;
}
write(1, &str[i], 1);    
j++;
i--;
}
write(1, "\n", 1);
}
