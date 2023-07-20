#include <stdio.h>

/**
 * main - prints the sum of all even fibonacci numbers
 * less than 4000000
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long f = 1, g = 2, sum = g;

	while (g + f < 4000000)
	{
		g += f;
		if (g % 2 == 0)
			sum += g;
		f = g - f;
		++i;
	}
	printf("%ld\n", sum);
	return (0);
}
