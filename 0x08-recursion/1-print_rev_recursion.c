#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to string to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int i = 0;
	char c;

	if (s[i] == '\0')
	{
		return;
	}

	c = s[i];
	i++;
	_print_rev_recursion(s + i);
	_putchar(c);
}
