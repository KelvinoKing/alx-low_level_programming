#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: first param
 * @accept: second param
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int equal = 0;
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		equal = count;
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				count++;
			j++;
		}
		if (equal == count)
			break;
		i++;
	}

	return (count);
}
