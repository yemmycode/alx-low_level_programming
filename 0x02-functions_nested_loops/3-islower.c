#include "main.h"

/**
 * _islower - checking for lowercase characters
 * @c: to-check character
 * Return: 1 for lowercase character or 0 for something else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
