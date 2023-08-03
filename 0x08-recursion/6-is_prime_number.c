#include "main.h"

/**
 * check_prime - Checks if the number is prime
 * @n: Number to be checked
 * @i: Iteration times
 * Return: 1 for prime or 0 for composite
 */
int check_prime(int n, int i)
{
if (n <= 1)
return 0;
if (n % i == 0 && i > 1)
return 0;

if (i * i > n)
return 1;
return check_prime(n, i + 1);
}

/**
 * is_prime_number - This returns if a number is prime
 * @n: The number to check
 * Return: Value of integer (1 for prime or 0 for composite)
 */
int is_prime_number(int n)
{
return check_prime(n, 2);
}
