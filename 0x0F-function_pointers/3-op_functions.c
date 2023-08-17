#include <stdio.h>
#include <stdlib.h>

int op_add(int a, int b) { return a + b; }
int op_sub(int a, int b) { return a - b; }
int op_mul(int a, int b) { return a * b; }

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}

int main(int argc, char *argv[])
{
if (argc != 4)
{
printf("Error\n");
return (98);
}

int num1 = atoi(argv[1]);
char *operator = argv[2];
int num2 = atoi(argv[3]);

int result;

if (strcmp(operator, "+") == 0)
result = op_add(num1, num2);
else if (strcmp(operator, "-") == 0)
result = op_sub(num1, num2);
else if (strcmp(operator, "*") == 0)
result = op_mul(num1, num2);
else if (strcmp(operator, "/") == 0)
result = op_div(num1, num2);
else if (strcmp(operator, "%") == 0)
result = op_mod(num1, num2);
else
{
printf("Error\n");
return (99);
}

printf("%d\n", result);
return (0);
}
