#include "main.h"

/**
 * factorial - This calculates the factorial of a number
 * @n: number to calculate the factorial
 * Return: an integer value
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n <= 1)
return (1);
else
return (n * factorial(n - 1));
}
