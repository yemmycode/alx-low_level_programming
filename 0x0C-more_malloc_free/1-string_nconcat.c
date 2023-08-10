#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - Concatenates up to n bytes of one string
* to another string
* @s1: The destination string
* @s2: The source string
* @n: The maximum number of bytes to concatenate from s2
* Return: A pointer to the resulting concatenated
* string, or NULL on failure
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

while (s1 && s1[len1])
len1++;

while (s2 && s2[len2])
len2++;

if (n < len2)
result = (char *)malloc(sizeof(char) * (len1 + n + 1));

else
result = malloc(sizeof(char) * (len1 + len2 + 1));

if (!result)
return (NULL);

while (i < len1)
{
result[i] = s1[i];
i++;
}

while (n < len2 && i < (len1 + n))
result[i++] = s2[j++];

while (n >= len2 && i < (len1 + len2))
result[i++] = s2[j++];

result[i] = '\0';

return (result);
}
