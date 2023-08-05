#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints products of two arg numbers
 * @argc: number of arguments
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
int r1 = 0;
int r2 = 0;

if (argc == 3)
{
r1 = atoi(argv[1]);
r2 = atoi(argv[2]);
printf("%d\n", r1 * r2);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
