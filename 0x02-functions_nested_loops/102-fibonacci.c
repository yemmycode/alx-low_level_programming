#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main() {
    int a = 1;
    int b = 2;
    int fibonacci;

    printf("%d, %d", a, b);

    int i = 2;
    while (i < 50) {
        fibonacci = a + b;
        printf(", %d", fibonacci);
        a = b;
        b = fibonacci;
        i++;
    }

    printf("\n");

    return 0;
}

