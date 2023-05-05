#include "main.h"
/**
 * _isupper - Checks whether a character is uppercase
 * @c: stores the value of character
 * Return: int
 */
int _isupper(int c)
{
	int result;

	if (c >= 65 && c <= 90)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}

	return (result);
}
