#include <stdio.h>
#include <stdlib.h>

/**
 * main - this prints the file name
 * Return: 0
 */

int main(void)
{
char *filename = (char *)__FILE__; 

printf("%s\n", filename);

free(filename);

return (0);
}
