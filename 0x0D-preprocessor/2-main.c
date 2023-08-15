#include <stdio.h>
#include <stdlib.h>

int main(void)
{
char *filename = (char *)__FILE__; 

printf("%s\n", filename);

free(filename);

return 0;
}
