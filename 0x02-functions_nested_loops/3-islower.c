#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * @c: character to be checked
 *
 * Return: int 1 if lowercase
 */
int _islower(int c)
{
	int result;

	if (c >= 97 && c < 123)
		result = 1;
	else
		result = 0;

	return (result);
}
