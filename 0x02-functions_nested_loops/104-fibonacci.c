#include <stdio.h>

/**
 * main - prints the very first 98 fibonacci numbers 
 * starting with 1 & 2, seperated by comma, followed
 * by space.
 * Return: 0
 */

int main() {
    unsigned long long a = 1, b = 2, c;
    int count;

    printf("%llu, %llu, ", a, b);

    for (count = 2; count < 98; count++) {
        c = a + b;
        printf("%llu", c);

        if (count != 97) {
            printf(", ");
        }

        a = b;
        b = c;
    }

    printf("\n");
    return 0;
}
