#include "main.h"
#include <unistd.h>
/**
 * puts2 - prints every other character of a string, starting with the
 * first character
 * @str: char pointer
 * Return: nothing
 */

void puts2(char *str)
{
int i = 0;
int j = 0;
while (str[i] != '\0')
{
i++;
}
if (i % 2 != 0 || i == 0)
{
i--;
}
for (; i >= 0; i--)
{
if (i % 2 == 0)
{
if (str[i] != '\n' || str[i] != '\0')
{
write(1, &str[j], 1);
}
}
j++;
}
write(1, "\n", 1);
}
