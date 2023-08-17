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

int op_add(int a, int b) { return a + b; }
int op_sub(int a, int b) { return a - b; }
int op_mul(int a, int b) { return a * b; }
int op_div(int a, int b) { return a / b; }
int op_mod(int a, int b) { return a % b; }

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

int i = 0;
while (ops[i].op != NULL)
{
if (ops[i].op[0] == s[0] && s[1] == '\0')
return (ops[i].f);
i++;
}

return (NULL);
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

int (*operation)(int, int) = get_op_func(operator);

if (operation == NULL)
{
printf("Error\n");
return (99);
}

if ((operator[0] == '/' || operator[0] == '%') && num2 == 0)
{
printf("Error\n");
return (100);
}

int result = operation(num1, num2);
printf("%d\n", result);

return (0);
}
