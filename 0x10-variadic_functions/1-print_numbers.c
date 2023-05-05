#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Prints numbers followed by a new line
 *
 * @separator: pointer to string to be printed btwn numbers
 * @n: number of integers passed to function
 *
 * Return: void
 */
void print_numbers(const char *separator, unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
		}
		printf("\n");
	}
	else if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
			if (i < n - 1)
				printf("%s", separator);
		}
		printf("\n");
	}
	va_end(ap);
}
