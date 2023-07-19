#include "main.h"

/**
 * print_sign - this prints the sign of number
 * @n: Number to be checked
 * Return: 1 for positive num, and -1 for negative num or 0 for different result
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
