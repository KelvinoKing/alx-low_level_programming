#include "main.h"
/**
 * calcSqrt - calculates the natural suare root
 * _sqrt_recursion - returns the natural square root
 *
 * @n: function parameter
 * @j: function parameter
 *
 * Return: int
 */
int calcSqrt(double n, int j)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n * n < j)
		return (-1);
	if (n * n == j)
		return (n);
	else
		return (calcSqrt((n + (j / n)) / 2, j));
}

/**
 * _sqrt_recursion - Returns natural square root of a number
 *
 * @n: function parameter
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int j;

	j = calcSqrt(n, n);

	if (j * j == n)
		return (j);
	else
		return (-1);
}
