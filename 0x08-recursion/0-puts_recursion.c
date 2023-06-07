#include "main.h"
/**
 * _puts_recursion - Prints a string
 * @s: pointer to string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(s[i]);
		i++;
	}
	_puts_recursion(s + i);
}
