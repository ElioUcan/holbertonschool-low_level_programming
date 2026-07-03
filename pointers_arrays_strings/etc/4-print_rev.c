#include "main.h"
#include <unistd.h>

/**
 * print_rev - prints a string in reverse.
 * @s: char value
 * Return: nothing
 */
void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
i--;
for (; i >= 0 ; i--)
{
if (s[i] != '\n' && s[i] != '\0')
{
write(1, &s[i], 1);
}
}
write(1, "\n", 1);
}
