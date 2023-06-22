#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings followed by new line
 * @separator: string used to separate parameters
 * @n: number of parameters
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;
	char *str;

	va_start(ap, n);
	while (i < n)
	{
		str = va_arg(ap, char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if ((separator != NULL) && (i < n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
