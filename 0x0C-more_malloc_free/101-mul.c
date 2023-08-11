#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define ERROR_MESSAGE "Error"
#define MAX_DIGITS 10000

/**
* is_digit - Checks if a string consists only of digit characters
* @s: String to be checked
* Return: 1 if the string contains only digits, 0 otherwise
*/

int is_digit(char *s)
{
while (*s)
{
if (*s < '0' || *s > '9')
return (0);
s++;
}
return (1);
}

/**
* multiply - Multiplies two positive numbers represented as strings
* @num1: First number string
* @num2: Second number string
*/
void multiply(char *num1, char *num2)
{
int len1 = 0, len2 = 0, len, i, j;
int result[MAX_DIGITS] = {0};

while (num1[len1])
len1++;
while (num2[len2])
len2++;

len = len1 + len2;

for (i = len1 - 1; i >= 0; i--)
{
for (j = len2 - 1; j >= 0; j--)
{
result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
if (result[i + j + 1] >= 10)
{
result[i + j] += result[i + j + 1] / 10;
result[i + j + 1] %= 10;
}
}
}

int a = 0;
for (i = 0; i < len - 1 && result[i] == 0; i++)
;

for (; i < len; i++)
{
if (result[i])
_putchar(result[i] + '0');
if (a || i == len - 1)
a = 1;
}

if (!a)
_putchar('0');

_putchar('\n');
}

int main(int argc, char *argv[])
{
if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
{
for (int i = 0; ERROR_MESSAGE[i]; i++)
_putchar(ERROR_MESSAGE[i]);
return 98;
}

multiply(argv[1], argv[2]);

return 0;
}
