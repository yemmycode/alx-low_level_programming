#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: String to return
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return 1 + _strlen_recursion(s + 1);
}

/**
 * comparator - Compares each characters of a string
 * @s: The string
 * @n1: The lowest iterator
 * @n2: The highest iterator
 * Return: 1 if characters match (palindrome), 0 otherwise
 */
int comparator(char *s, int n1, int n2)
{
if (*(s + n1) == *(s + n2))
{
if (n1 >= n2)
return (1);
return comparator(s, n1 + 1, n2 - 1);
}
return (0);
}

/**
 * is_palindrome - Detects if a string is a palindrome
 * @s: The string
 * Return: 1 if the string is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return comparator(s, 0, _strlen_recursion(s) - 1);
}

