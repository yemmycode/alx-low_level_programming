#include "variadic_functions.h"

/*
* sum_them_all - Calculates the sum of a variable number of integers.
* @n: The number of integers to sum.
* ...: The integers to be summed.
*
* Return: The sum of the provided integers.
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int index;
int total = 0;

va_list args_list;

va_start(args_list, n);

for (index = 0; index < n; index++)
{
total += va_arg(args_list, int);
}

va_end(args_list);

return (total);
}
