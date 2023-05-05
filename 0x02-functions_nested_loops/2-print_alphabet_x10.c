#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char i = 97;
	char j = 0;

	while (j < 10)
	{
		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
		i = 97;
	}
}
