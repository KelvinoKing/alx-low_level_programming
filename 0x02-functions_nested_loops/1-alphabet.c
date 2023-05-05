#include "main.h"
/**
 * print_alphabet - prints alphebets in lowercase
 *
 * Description: Prints alphabets in lowercase followed by a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	char i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
