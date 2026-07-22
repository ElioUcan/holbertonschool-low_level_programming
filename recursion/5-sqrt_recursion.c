#include "main.h"


/**
 * guess_square - pass numbers
 * @n: int
 * @try: int
 * Return: int
 */


int guess_square(int n, int try)
{
{
if (try * try > n)
return (-1);
}
if (try * try == n)
{
return (try);
}

return (guess_square(n, (try + 1)));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{

if (n < 0)
{
return (-1);
}

return (guess_square(n, 0));
}
