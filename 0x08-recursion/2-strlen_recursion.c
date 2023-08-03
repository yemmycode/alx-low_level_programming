#include "main.h"

/**
 * _strlen_recursion - This calculates the length of a string
 * @s: string to count
 * Return: value of integer
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (_strlen_recursion(s + 1) + 1);
}
