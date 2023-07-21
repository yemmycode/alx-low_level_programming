#include <stdio.h>
#include "main.h"

/**
 * main - point of entry
 * description: print numbers 1 - 100 w/
 * fizz for multiples of 3, buzz for multiples of 5,
 * fizzBuzz for multiples of both
 * Return: 0
 */

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%i", i);

if (i < 100)
printf(" ");
}

printf("\n");
return (0);
}
