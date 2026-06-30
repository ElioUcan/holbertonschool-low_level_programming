#include "main.h"
#include <unistd.h>
/**
 * _puts: prints and add a \n
 * @str: string
 * Return: nothing
 */




void _puts(char *str)
{
int i = 0;
char new = '\n';

while (str[i] != '\0')
{
i++;
}
write(1,str, i);
write(1, &new, 1);
}


int main(void)
{
_puts("Hello");
return (0);
}