#include "main.h"
#define NULL 0
/**
 * _strpbrk - searches a string for any set of bytes
 *
 * @s: first param
 * @accept: second param
 *
 * Return: char or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int j = 0, i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}

	return (NULL);
}
