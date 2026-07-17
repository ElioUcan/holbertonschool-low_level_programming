#include "main.h"
/**
 * main - prints the arguments passed
 * @argc: int
 * @argv: array of strings
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
int i;
if (argc > 0)
{
for (i = 0; argv[i] != NULL; i++)
{
printf("%i\n", i);
}
}
return (0);
}
