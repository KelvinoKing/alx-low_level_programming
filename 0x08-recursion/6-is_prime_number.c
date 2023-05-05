#include "main.h"
/**
 * check_prime - checks for prime numbers
 *
 * @n: first param
 * @j: second param
 *
 * Return: int
 */
int check_prime(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0)
		return (0);
	else
		return (check_prime(n, j - 1));
}

/**
 * is_prime_number - Returns 1 if integer passed is prime number
 *
 * @n: function parameter
 *
 * Return: int
 */
int is_prime_number(int n)
{
	int j;

	if (n <= 1)
		return (0);

	j = check_prime(n, n - 1);
	return (j);
}
