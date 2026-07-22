#include "main.h"
#include <stdio.h>

/**
 * remember - 1 if primme otherwise 0
 * @n: int
 * @try: int
 * Return: 1 if prime otherwise 0
 */

int remember(int n, int try)
{
if (try > n)
{
return (0);
}

if ((try != 1 && try != n) && (n % try == 0))
{
return (0);
}
if (try == n)
{
return (1);
}

return (remember(n, try + 1));
}

/**
 * is_prime_number - 1 if primme otherwise 0
 * @n: int
 * Return: 1 if prime otherwise 0
 */

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (remember(n, 1));
}
