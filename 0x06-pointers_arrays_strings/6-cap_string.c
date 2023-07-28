#include "main.h"
#include <ctype.h> 

/**
 * cap_string - capitalize all words of a string
 * @str: string to be capitalized
 * Return: a pointer to the changed string
 */
char *cap_string(char *str)
{
int index = 0;

while (str[index])
{
while (str[index] && !islower(str[index])) 
index++;

if (str[index] && (index == 0 || isspace(str[index - 1]) || ispunct(str[index - 1])))
str[index] = toupper(str[index]);

index++;
}

return str;
}

