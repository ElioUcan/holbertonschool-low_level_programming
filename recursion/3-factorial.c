#include "main.h"
/**
 * factorial - returns a factorial
 * @n: int
 * Return: int
 */
int factorial(int n)
{
if (n == 0 || n == 1)
{
return (0);
}
return (n * factorial(n - 1));
}
