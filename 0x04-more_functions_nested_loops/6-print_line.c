#include "main.h"
/**
 * print_line - Draws a straght line in the terminal
 *
 * @n: argument of function
 *
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
