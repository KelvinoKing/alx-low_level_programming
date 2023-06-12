#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strlen - Returns the length of a string
 *
 * @s: Function parameter
 *
 * Return: int
 */
int _strlen(char *s)
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
 * str_concat - Concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer char
 */
char *str_concat(char *s1, char *s2)
{
	int lens1, lens2;
	int i, j = 0, k = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lens1 = _strlen(s1);
	lens2 = _strlen(s2);
	i = lens1 + lens2 + 1;
	ptr = malloc(i * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	while (j < lens1)
	{
		ptr[j] = s1[j];
		j++;
	}
	while (j < i)
	{
		ptr[j] = s2[k];
		j++;
		k++;
	}

	return (ptr);
}
