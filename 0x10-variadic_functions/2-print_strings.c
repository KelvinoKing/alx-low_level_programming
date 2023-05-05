#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings --> Prints strings, followed by a new line
 *
 * @separator: a pointer to string
 * @n: int
 *
 * Return: void
 */
void print_strings(const char *separator, unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			str = "(nil)";
		if (i < n - 1)
		{
			if (separator == NULL)
				printf("%s", str);
			else
				printf("%s%s", str, separator);
		}
		else
			printf("%s\n", str);
	}
	va_end(ap);
}
