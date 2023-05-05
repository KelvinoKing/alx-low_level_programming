#include "main.h"
/**
 * print_sign - Prints the sign of a number
 *
 * @n: Contains the value to be checked
 *
 * Return: int 1 if n is greater than zero
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		result = 0;
		_putchar('0');
	}
	else if (n < 0)
	{
		result = -1;
		_putchar('-');
	}

	return (result);
}
