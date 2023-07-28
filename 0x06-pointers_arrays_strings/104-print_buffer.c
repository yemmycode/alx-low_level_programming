#include "main.h"
#include <stdio.h>

/**
 * print_buffer - print the buffer
 * @b: pointer to the buffer
 * @size: size of the buffer
 */
void print_buffer(char *b, int size)
{
    int o, i; 

    o = 0;
    if (size <= 0)
    {
        printf("\n");
        return;
    }
    while (o < size)
    {
        int c; 
        printf("%08x: ", o);

        for (i = 0; i < 10; i++)
        {
            c = (unsigned char)(*(b + o + i));

            if (c < 32 || c > 126)
            {
                c = '.';
            }
            printf("%c", c);
        }
        printf("\n");
        o += 10;
    }
}
