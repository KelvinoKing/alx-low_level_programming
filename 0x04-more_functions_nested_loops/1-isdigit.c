#include "main.h"
/**
 * _isdigit - Checks for a digit
 *
 * @c: Argument parameter of function
 *
 * Return: int
 */
int _isdigit(int c)
{
	int result;

	if (c >= 48 && c <= 57)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}

	return (result);
}
