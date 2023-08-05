#include <stdio.h>
#include <stdlib.h>

/**
 * main - this prints min number of coins to make a change for amount of money
 * @argc: number of arguments given to program
 * @argv: array of pointers to arguments
 * Return: -1 if number of arguments is not exactly one, else 0
 */

int main(int argc, char *argv[])
{
int cents, coins = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

while (cents > 0)
{
coins++;

if (cents >= 25)
{
cents -= 25;
continue;
}

if (cents >= 10)
{
cents -= 10;
continue;
}

if (cents >= 5)
{
cents -= 5;
continue;
}

if (cents >= 2)
{
cents -= 2;
continue;
}

cents--;
}

printf("%d\n", coins);
return (0);
}
