#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	char c;
	
	char upperCase;

	c = 'a';
	upperCase = 'A';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(upperCase <= 'z') {
			putchar(upperCase);
			upperCase++;
		}
	putchar('\n');
	return (0);
}
