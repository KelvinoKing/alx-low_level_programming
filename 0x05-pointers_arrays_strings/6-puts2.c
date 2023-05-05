#include "main.h"
/**
 * puts2 -  prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: Function parameter
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i] != '\0')
	{
		count++;
		i++;
	}

	for (i = 0; i < count; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
