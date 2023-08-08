#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
* argstostr - Concatenate command line arguments into a single string.
* @ac: Number of arguments.
* @av: Array of argument strings.
* Return: A pointer to the concatenated string.
*/
char *argstostr(int ac, char **av)
{
int i, j, total_length = 0;
char *concatenated_str, *ptr;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
total_length += strlen(av[i]) + 1;

concatenated_str = malloc(sizeof(char) * total_length);
if (concatenated_str == NULL)
return (NULL);

ptr = concatenated_str;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
*ptr = av[i][j];
ptr++;
}
*ptr = '\n';
ptr++;
}
*ptr = '\0';

return (concatenated_str);
}
