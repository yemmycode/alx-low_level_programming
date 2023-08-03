#include "main.h"

/**
 * _puts_recursion - This prints a string followed by a new line
 * @s: String to print
 * Return: void
 */
void _puts_recursion(char *s)
{
_putchar(*s);
if (*s != '\0')
_puts_recursion(s + 1);
else
_putchar('\n');
}
