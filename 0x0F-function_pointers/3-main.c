#include <stdio.h>
#include <stdlib.h>

typedef int (*operation_t)(int, int);

int op_add(int a, int b) { return a + b; }
int op_sub(int a, int b) { return a - b; }
int op_mul(int a, int b) { return a * b; }
int op_div(int a, int b) { return a / b; }
int op_mod(int a, int b) { return a % b; }

operation_t get_operation(char operator)
{
switch (operator)
{
case '+': return op_add;
case '-': return op_sub;
case '*': return op_mul;
case '/': return op_div;
case '%': return op_mod;
default: return NULL;
}
}

int main(int argc, char *argv[])
{
if (argc != 4)
{
printf("Error\n");
return (98);
}

int num1 = atoi(argv[1]);
char *operator_str = argv[2];
int num2 = atoi(argv[3]);

char operator = operator_str[0];
operation_t operation = get_operation(operator);

if (!operation || (operator == '/' || operator == '%') && num2 == 0)
{
printf("Error\n");
return (operator == '/' || operator == '%' ? 100 : 99);
}

int result = operation(num1, num2);
printf("%d\n", result);

return (0);
}

