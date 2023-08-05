#include "main.h"
#include <stdio.h>

/**
 * main - this prints the number of arguments passed into the main
 * @argc: the number of command line arguments
 * @argv: name of the array
 * Return: 0
 */
int main(int argc, char *argv[])
{
int k;

if (argc == 1)
printf("%d\n", argc - 1);
else
{
for (k = 0; *argv; k++, argv++)
printf("%d\n", k - 1);
}
return (0);
}
