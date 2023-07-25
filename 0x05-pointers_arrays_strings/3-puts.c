#include "main.h"

/**
 * _puts - This prints the string
 * @str: string to print
 * Retun: 0
 */

void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
