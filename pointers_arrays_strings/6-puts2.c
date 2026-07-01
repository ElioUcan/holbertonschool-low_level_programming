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
while (str[i] != '\0')
{
i++;
}
while (i % 2 != 0)
{
write(1, &str[i], i);
}
}
