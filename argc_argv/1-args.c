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
if (argc > 0)
{
while (i < argc)
{
j++;
}
printf("%i\n", i);
}
return (0);
}
