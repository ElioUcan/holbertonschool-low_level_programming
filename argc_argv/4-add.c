#include "main.h"
/**
 * main - adds positive numbers
 * @argc: int
 * @argv: array of strings
 * Return: 0 if success else 1
 */

int main(int argc, char *argv[])
{

int i;
int number;
int total = 0;
if (argc > 2)
{
for (i = 1; i < argc; i++)
{
number = atoi(argv[i]);
if (number == 0)
{
printf("Error\n");
return (1);
}
total += number;
}
printf("%i\n", total);
}
else
{
printf("0\n");
}
return (0);
}
