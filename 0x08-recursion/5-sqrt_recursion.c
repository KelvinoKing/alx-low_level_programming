#include "main.h"
/**
 * calcSqrt - calculates square root
 * @n: first param
 * @j: second param
 *
 * Return: double
 */
double calcSqrt(double n, int j)
{
	if (n * n == j)
	{
		return (n);
	}
	if (n * n < j)
	{
		return (-1);
	}

	n = ((n / 2) + (j / n) / 2);
	return (calcSqrt(n, j));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: parameter
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int j;

	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (-1);
	}

	j = calcSqrt(n, n);

	if (j * j == n)
	{
		return (j);
	}

	return (-1);
}
