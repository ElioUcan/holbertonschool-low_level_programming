#include "main.h"
/**
 * main - prints the arguments passed
 * @argc: int
 * @argv: array of strings
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
int i = 1;
int j = 0;
if (argv && argc > 1)
{
while (i < argc )
{
j++;
i++;
}
printf("%i\n", i);
}
return (0);
}
