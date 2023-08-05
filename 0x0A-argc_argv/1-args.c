#include "main.h"
#include <stdio.h>

/**
 * main - this prints the number of arguments passed into the main
 * @argc: the number of command line arguments
 * @argv: name of the vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void)argv; 

printf("%d\n", argc - 1);

return (0);
}
