#include "main.h"
/**
 * print_last_digit - Prints the last digit in a number
 *
 * Description: Prints the last digit and returns value of last digit
 *
 * @c: The parameter passed as argument
 *
 * Return: int value of the last digit
 */
int print_last_digit(int c)
{
	int result = c % 10;

	if (c < 0)
	{
		result *= -1;
	}

	_putchar(result + '0');

	return (result);
}
