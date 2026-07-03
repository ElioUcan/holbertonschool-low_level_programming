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
int n;
while (str[i] != '\0')
{
i++;
}
if (i % 2 == 0)
{
n = (i / 2);
}
else
{
n = ((i + 1) / 2);
}

while (str[n] != '\0')
{
write(1, &str[n], 1);
n++;
}

write(1, "\n", 1);
}
