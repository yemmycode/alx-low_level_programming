#include "main.h"

/**
 * _pow_recursion - This returns the value of x raised to the power of y
 * @x: value to multiply
 * @y: number of times to multiply the value
 * Return: value multiplied by y times
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}
