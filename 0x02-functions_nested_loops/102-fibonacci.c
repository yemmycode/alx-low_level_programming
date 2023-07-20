#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci number
 *
 * Return: 0
 */

int main(void)
{
        int i = 0;
        long f = 1, g = 2;

        while (i < 50)
        {
                if (i == 0)
                        printf("%ld", f);
                else if (i == 1)
                        printf(", %ld", g);
                else
                {
                        g += f;
                        f = g - f;
                        printf(", %ld", g);
                }
                ++i;
        }
        printf("\n");
        return (0);
} 
