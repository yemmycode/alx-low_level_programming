#include "main.h"
#include <stdlib.h>

/**
 * count_word - function to count the number of words in string
 * @s: string to be counted
 * Return: the number of word in the string
*/

int count_word(char *s)
{
int flag, count, word;

flag = 0;
word = 0;

for (count = 0; s[count] != '\0'; count++)
{
if (s[count] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
word++;
}
}
return (word);
}
/**
 * **strtow - this splits string into words
 * @str: the str to be splitted
 * Return: the pointer to array of strings or NULL(Error)
 */

char **strtow(char *str)
{
char **matrix, *tmp;
int i, k = 0, len = 0, word, c = 0, start, end;

while (*(str + len))
len++;
word = count_word(str);
if (word == 0)
return (NULL);

matrix = (char **)malloc((word + 1) * sizeof(char *));

if (matrix == NULL)
return (NULL);

for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
end = i;

tmp = (char *)malloc((c + 1) * sizeof(char));

if (tmp == NULL)
return (NULL);

while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[k] = tmp - c;
k++;
c = 0;
}
}
else if (c++ == 0)
start = i;
}
matrix[k] = NULL;
return (matrix);
}
