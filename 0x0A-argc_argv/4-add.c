#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints sum of positive arg numbers
 * @argc: number of arguments
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
unsigned int k, sum = 0;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
char *e = argv[i];
for (k = 0; k < strlen(e); k++)
{
if (e[k] < '0' || e[k] > '9')
{
printf("Error\n");
return 1;
}
}
sum += atoi(e);
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}

return 0;
}
