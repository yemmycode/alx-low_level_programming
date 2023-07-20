#include <stdio.h>

/**
 * main - prints the very first 98 fibonacci numbers 
 * starting with 1 & 2, seperated by comma, followed
 * by space.
 * Return: 0
 */
#include <stdio.h>

int main(void)
{
    int count;
    unsigned long long fib1 = 0, fib2 = 1, sum;
    unsigned long long fib1_upper, fib2_upper, fib1_lower, fib2_lower;
    unsigned long long upper, lower;

    for (count = 0; count < 92; count++)
    {
        sum = fib1 + fib2;
        printf("%llu, ", sum);
        fib1 = fib2;
        fib2 = sum;
    }

    fib1_upper = fib1 / 10000000000;
    fib2_upper = fib2 / 10000000000;
    fib1_lower = fib1 % 10000000000;
    fib2_lower = fib2 % 10000000000;

    for (count = 93; count < 100; count++)
    {
        upper = fib1_upper + fib2_upper;
        lower = fib1_lower + fib2_lower;

        if (fib1_lower + fib2_lower > 9999999999)
        {
            upper += 1;
            lower %= 10000000000;
        }

        printf("%llu%010llu", upper, lower);

        if (count != 99)
            printf(", ");

        fib1_upper = fib2_upper;
        fib1_lower = fib2_lower;
        fib2_upper = upper;
        fib2_lower = lower;
    }

    printf("\n");
    return 0;
}

