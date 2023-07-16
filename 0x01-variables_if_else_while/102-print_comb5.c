#include <stdio.h>
/**
 * main - print combination of two digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int a;

	for (i = 0; i <= 99; i++)
	{
		for (a = 0; a <= 99; a++)
		{
			if (i < a && i != a)
			{
				putchar((i /10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((a /10) + '0');
				putchar((a % 10) + '0');
				if (i != 98 || a != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
