#include "main.h"

/**
* Concatenate two strings.
*
* @param s1 First string.
* @param s2 Second string.
* Return: Pointer to the newly allocated space containing concatenated string.
*/
char *str_concat(char *s1, char *s2)
{
int s1len = 0, s2len = 0, i;
char *output;

if (s1 == NULL) s1 = "";
if (s2 == NULL) s2 = "";

for (i = 0; s1[i] != '\0'; i++) s1len++;
for (i = 0; s2[i] != '\0'; i++) s2len++;

output = malloc((s1len + s2len + 1) * sizeof(char));

if (output == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
output[i] = s1[i];

for (i = 0; s2[i] != '\0'; i++)
output[s1len + i] = s2[i];

output[s1len + s2len] = '\0';

return (output);
}
