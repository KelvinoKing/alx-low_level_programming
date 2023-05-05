#include "main.h"
#include <stdio.h>
/**
 * puts_half - Prints half of a string
 *
 * @str: Function argument
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int count = 0;
	int half;

	while (str[i] != '\0')
	{
		count++;
		i++;
	}

	if (count % 2 == 0)
	{
		half = count / 2;
	}
	else if (count % 2 != 0)
	{
		half = (count + 1) / 2;
	}

	for (i = half; i < count; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
