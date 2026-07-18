#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{

if (n % n != 0)
{
return (-1);
}
else
{
return (1);
}

return (n / _sqrt_recursion(n));
}
