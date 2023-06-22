#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameter
 * @n: number of parameters
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);
	while (i < n)
	{
		sum += va_arg(ap, unsigned int);
		i++;
	}
	return (sum);
}
