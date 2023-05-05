#include "main.h"
#define NULL 0
/**
 * _strchr - Locates a character in a string
 *
 * @s: first param
 * @c: second param
 *
 * Return: pointer to first occurence of @c or null if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	if (c == '\0')
		return (s + i);

	return (NULL);
}
