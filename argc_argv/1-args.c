#include "main.h"
/**
 * main - prints the arguments passed
 * @argc: int
 * @argv: array of strings
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
int i = 0;
int j = -1;
if (argv)
{
while (i < argc)
{
i++;
j++;
}
printf("%i\n", j);
}
return (0);
}
