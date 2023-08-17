#include <stdio.h>
#include <stdlib.h>

/**
* struct op - Struct op
*
* @op: The operator
* @f: The function associated
*/
typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }
int modulo(int a, int b) { return a % b; }

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

op_t ops[] = {
{"+", add},
{"-", subtract},
{"*", multiply},
{"/", divide},
{"%", modulo},
{NULL, NULL}
};

int i = 0;
while (ops[i].op != NULL)
{
if (strcmp(ops[i].op, operator) == 0)
{
if ((strcmp(operator, "/") == 0 || strcmp(operator, "%") == 0) && num2 == 0)
{
printf("Error\n");
return (100);
}

printf("%d\n", ops[i].f(num1, num2));
return (0);
}
i++;
}

printf("Error\n");
return (99);
}
