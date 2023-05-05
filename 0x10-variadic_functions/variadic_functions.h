#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct any - Struct
 *
 * @c: data type of char
 * @f: pointer to function
 */
typedef struct any
{
	char c;
	void (*f)(va_list);
} any_t;

void print_all(const char * const format, ...);
#endif /* !VARIADIC_FUNCTION_H*/
