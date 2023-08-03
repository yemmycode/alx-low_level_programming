#include "main.h"

/**
 * _sqrt - This calculates the natural square root of a number
 * @n: The number to calculate square root
 * @i: Iterate number
 * Return: Natural square root or -1 if not found
 */
int _sqrt(int n, int i)
{
int sqrt = i * i;
if (sqrt > n)
return (-1);
if (sqrt == n)
return (i);
return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - This returns the natural square root of a number
 * @n: The number to calculate natural square root
 * Return: Natural square root or -1 if not found
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
