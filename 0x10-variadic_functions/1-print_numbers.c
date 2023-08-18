#include "variadic_functions.h"

/*
* print_numbers - Prints numbers followed by a new line.
* @separator: The string to be printed between numbers.
* @n: The number of integers passed to the function.
* ...: The integers to be printed.
* function prints the provided integers separated by the specified separator.
* If separator is NULL, it won't be printed. A new line is printed at the end.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);

va_end(args);

i = 0;

va_start(args, n);

while (i < n)
{
int num = va_arg(args, int);
printf("%d", num);

if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}

++i;
}

va_end(args);

printf("\n");
}
