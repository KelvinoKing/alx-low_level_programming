#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 *
 * Description: The function computes the absolute values of specified integers
 *
 * @c: The value whose absolute value is to be determined
 *
 * Return: int value
 */
int _abs(int c)
{
	int result;

	if (c < 0)
	{
		result = (-c);
	}
	else if (c > 0)
	{
		result = c;
	}
	else if (c == 0)
	{
		result = 0;
	}

	return (result);
}
