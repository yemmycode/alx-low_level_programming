#include "main.h"

/**
 * print_most_numbers - 0,1,3,5,6,7,8,9
 *
 * Return void
 */
void print_most_numbers(void)
{       
        char c;
        
        for (c = '0'; c <= '9'; c++)
        {       
                if (!(c == '2' || c == '4'))
                        _putchar(c);
        }       
        _putchar('\n');
}  
