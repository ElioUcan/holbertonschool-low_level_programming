#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @v: int to be used
 * Return: abs int if correct else 0
 */

int _abs(int v)
{
if (v < 0)
{
return (v * -1);
}
return (v);
}
