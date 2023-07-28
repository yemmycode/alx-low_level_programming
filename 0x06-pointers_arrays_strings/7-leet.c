#include "main.h"

/**
 * leet - the function that encodes a string into 1337
 * letters a and A are replaced by 4
 * letters e and E are replaced by 3
 * letters o and O are replaced by 0
 * letters t and T are replaced by 7
 * letters l and L are replaced by 1
 * @s: a pointer to a string
 * Return: pointer to the encoded string
 */
char *leet(char *s)
{
int string_length = 0, leetCount;
char leetLetters[] = "aAeEoOtTlL";
char leetNums[] = "4433007711";

while (s[string_length] != '\0')
{
leetCount = 0;
while (leetCount < 10)
{
if (leetLetters[leetCount] == s[string_length])
{
s[string_length] = leetNums[leetCount];
break; 
}
leetCount++;
}
string_length++;
}
return s;
}


