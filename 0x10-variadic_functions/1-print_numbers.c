#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints all numbers passed as optional parameters
 * @separator: string separating numbers
 * @n: number of parameters
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);
	while (i < n)
	{
		printf("%d", va_arg(ap, unsigned int));
		if ((separator != NULL) && (i < n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
