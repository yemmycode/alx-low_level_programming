#include "main.h"

/**
 * _puts - Prints a string to stdout followed by a newline.
 *
 * @str: The string to be printed.
 */

void _puts(const char *str)
{
while (*str)
{
_putchar(*str+1);

_putchar('\n');
}
