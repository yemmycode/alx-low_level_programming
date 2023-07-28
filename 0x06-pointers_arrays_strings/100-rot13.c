#include "main.h"

/**
 * rot13 - encodes a string using the ROT13 cipher
 * @str: pointer to the input string
 * Return: pointer to the encoded string
 */
char *rot13(char *str)
{
int i, j;
char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; c[j] != '\0'; j++)
{
if (str[i] == c[j])
{
str[i] = d[j];
break;
}
}
}

return str;
}


