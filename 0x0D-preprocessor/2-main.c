#include <stdio.h>
#include <stdlib.h>

int main(void)
{
char *filename = (char *)__FILE__; 

FILE *file = fopen("output.txt", "w"); 

if (file != NULL) 
{
fputs(filename, file); 
fclose(file); 
}

free(filename);

return (0);
}
