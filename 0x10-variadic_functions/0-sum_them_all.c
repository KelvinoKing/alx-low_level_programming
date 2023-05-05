#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all its parameters
 *
 * @n: first param
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}
	va_end(ap);
	return (sum);
}
