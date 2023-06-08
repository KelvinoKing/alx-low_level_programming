#include "main.h"
/**
 * check_prime - checks if input is prime
 * @n: first param
 * @j: second param
 *
 * Return: int
 */
int check_prime(int n, int j)
{
	if (j == 1)
	{
		return (1);
	}
	if (n % j == 0)
	{
		return (0);
	}

	return (check_prime(n, j - 1));
}
/**
 * is_prime_number - returns 1 if input is prime number else 0
 * @n: input
 *
 * Return: int
 */
int is_prime_number(int n)
{
	int j;

	if (n <= 1)
	{
		return (0);
	}

	j = check_prime(n, n - 1);

	return (j);
}
