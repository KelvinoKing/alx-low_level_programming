#include "main.h"
#include <stdlib.h>
/**
 * _strlen - Gets the length of strings passed
 *
 * @str: function param
 *
 * Return: int
 */
unsigned int _strlen(char *str)
{
	unsigned int length = 0;

	while (str[length] != '\0')
		length++;

	return (length);
}

/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to be concatenated from s2
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr = malloc(sizeof(char) * _strlen(s1) + n + 1);
	if (ptr == NULL)
		return (NULL);
	if (n >= _strlen(s2))
	{
		for (i = 0; i < _strlen(s1); i++)
		{
			ptr[i] = s1[i];
			k++;
		}
		for (j = 0; j < _strlen(s2); j++)
		{
			ptr[k] = s2[j];
			k++;
		}
	}
	else
	{
		for (i = 0; i < _strlen(s1); i++)
		{
			ptr[i] = s1[i];
			k++;
		}
		for (j = 0; j < n; j++)
		{
			ptr[k] = s2[j];
			k++;
		}
	}
	ptr[k] = '\0';

	return (ptr);
}
