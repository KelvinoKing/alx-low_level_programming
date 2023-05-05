#include "main.h"
/**
 * print_rev - Prints a string in reverse
 *
 * @s: function parameter
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;
	int count = 0;

	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
