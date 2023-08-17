#include <stdio.h>
#include <stdlib.h>

/**
* main - This function prints the opcodes of its own instructions.
* @argc: The number of arguments provided to the program.
* @argv: An array of pointers to the program's arguments.
* Return: 0 on successful completion.
*/
int main(int argc, char **argv)
{
int bytes;
int index = 0;

int (*address)(int, char **) = main;

unsigned char opcode;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
exit(2);
}

while (index < bytes)
{
opcode = *(unsigned char *)address;

printf("%.2x", opcode);

if (index != bytes - 1)
printf(" ");

index++;

address++;
}

printf("\n");

return 0;
}
