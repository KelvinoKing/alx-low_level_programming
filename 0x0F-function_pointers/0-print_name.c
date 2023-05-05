#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Prints a name
 *
 * @name: name to be printed
 * @f: pointer to a function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
