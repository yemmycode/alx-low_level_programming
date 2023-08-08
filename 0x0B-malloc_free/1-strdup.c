#include "main.h"

/**
* _strdup - this copies the string to new space in memory
* @str: the string to copy into new memory
* Return: the pointer to the replicated memory
*/

char *_strdup(char *str)
{
int i = 0;
char *repl;
int count = 0;

if (str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
count++;

repl = (char *)malloc((count + 1) * sizeof(char));

if (repl == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
repl[i] = str[i];

return (repl);
}
