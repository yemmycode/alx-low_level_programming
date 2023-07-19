#include <stdio.h>
/**
<<<<<<< HEAD
 * main - Entry point
=======
 * main - program that prints alphabet in lowercase
 *
>>>>>>> b35457b8e3436fe20157b0b943bf617179cc405d
 * Return: 0
 */
int main(void)
{
<<<<<<< HEAD
	int lowerCase = 'a';
	while
		(lowerCase <= 'z')
		{
			if
				(lowerCase == 'e' || lowerCase == 'q')

		}
	lowerC  clear

=======
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'e') && c <= 'z')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
>>>>>>> b35457b8e3436fe20157b0b943bf617179cc405d
