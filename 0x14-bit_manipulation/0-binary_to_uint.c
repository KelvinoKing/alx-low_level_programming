#include "main.h"
/**
 * _strlen - Returns the length of a string
 *
 * @s: Function parameter
 *
 * Return: int
 */
int _strlen(const char *s)
{
	int i = 0;
	int count = 0;

	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}

	return (count);
}

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number if successful
 */
unsigned int binary_to_uint(const char *b)
{
	 int i = 0;
	unsigned int multiplier = 1;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}

	i = _strlen(b) - 1;
	while (i >= 0)
	{
		if (b[i] == '0')
			multiplier += multiplier;
		else if (b[i] == '1')
		{
			sum += multiplier;
			multiplier += multiplier;
		}
		i--;
	}
	return (sum);
}
