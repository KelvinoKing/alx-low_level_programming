#include "main.h"
/**
 * _puts_recursion - Prints string followed by new line;
 *
 * @s: parameter
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	/*Base case*/
	if (s[0] == 0)
	{
		_putchar('\n');
		return;
	}

	_putchar(s[0]);
	_puts_recursion(s + 1);
}
