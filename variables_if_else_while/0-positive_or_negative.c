#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - generates a random int and decides wether or not is an
 * negative, positive o zero
 *
 * Return: 0 in case of functioning.
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n < 0)
{
printf("%i is negative\n", n);
}
else
{
printf("%i is zero\n", n);
}
	return (0);
}
