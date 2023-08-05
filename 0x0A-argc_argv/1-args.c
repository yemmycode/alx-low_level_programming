#include "main.h"
#include <stdio.h>

/**
 * main - This prints the number of arguments passed into the main.
 * @argc: The number of command line arguments.
 * @argv: The array of command line argument strings.
 * Return: 0
 */
int main(int argc, char *argv[])
{
int count = 0;

if (argc == 1)
{
printf("%d\n", count);
}
else
{
for (int i = 0; i < argc; i++)
{
count++;
}
printf("%d\n", count - 1);
}

return 0;
}

