#include "main.h"
/**
 * _isalpha --> Checks for alphabetic characters
 *
 * @c: represents characters
 *
 * Return: 1 if @c is a letter(lowercase or uppercase)
 */
int _isalpha(int c)
{
	int result;

	if ((c >= 97 && c < 123) || (c >= 65 && c < 91))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}

	return (result);
}
