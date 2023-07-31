#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: a pointer to pieces to be printed
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
char *ptr = (char *)a; 
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(*(ptr + (i * 8 + j)));
}
_putchar('\n');
}
}
