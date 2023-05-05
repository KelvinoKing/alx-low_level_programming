#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_char - Prints a character
 *
 * @ap: argument
 *
 * Return: void
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - Prints an integer
 *
 * @ap: param
 *
 * Return: void
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - Prints a float
 *
 * @ap: param
 *
 * Return: void
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_str - Prints a string
 *
 * @ap: param
 *
 * Return: void
 */
void print_str(va_list ap)
{
	char *p = va_arg(ap, char *);

	if (p == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", p);
}

/**
 * print_all - Prints anything
 *
 * @format: format of arguments passed
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *s1 = "";
	char *s2 = ", ";
	int i = 0;
	int j;
	va_list ap;

	any_t an[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{'\0', NULL}
	};

	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (an[j].c != '\0')
		{
			if (an[j].c == format[i])
			{
				printf("%s", s1);
				an[j].f(ap);
				s1 = s2;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
