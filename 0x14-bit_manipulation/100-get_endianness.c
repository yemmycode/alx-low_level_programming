#include "main.h"


/**
* get_endianness - this checks the endianness
* Return: 0 if it is big endian, 1 if it is little endian
*/
int get_endianness(void)
{
unsigned int x;
char *c;


x = 1;


c = (char *) &x;


return (*c);
}
