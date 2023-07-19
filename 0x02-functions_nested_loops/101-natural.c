#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 or 5 up to 1024
 * 
 * Return: 0
 */

int main() {
    int lim = 1024;
    int sum = 0;

    for (int i = 1; i < lim; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    printf("sum of multiples of 3 or 5 below %d is: %d\n", lim, sum);

    return 0;
}
