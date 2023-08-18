#include "variadic_functions.h"

/*
* print_all - Prints arguments according to format provided.
* @format: The format string specifying the types of arguments to print.
* ...: The arguments to be printed.
* function prints arguments based on the format string. Supported format
* specifiers are 'c' for char, 'i' for integer, 'f' for float, and 's' for string.
* If a string argument is NULL, "(nil)" is printed.
* A new line is printed at the end.
*/
void print_all(const char * const format, ...)
{
va_list args;
char c;
float f;
char *s;
int i = 0;

va_start(args, format);

while (format && format[i])
{
if (format[i] == 'c')
{
c = va_arg(args, int);
printf("%c", c);
}
else if (format[i] == 'i')
{
int num = va_arg(args, int);
printf("%d", num);
}
else if (format[i] == 'f')
{
f = va_arg(args, double);
printf("%f", f);
}
else if (format[i] == 's')
{
s = va_arg(args, char *);

if (s == NULL)
{
printf("(nil)");
}
else
{
printf("%s", s);
}
}

if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
{
printf(", ");
}

i++;
}

va_end(args);

printf("\n");
}
