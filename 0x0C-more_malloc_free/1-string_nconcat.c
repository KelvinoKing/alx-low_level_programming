#include "main.h"
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
 * string_nconcat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters from s2
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lenS1 = 0;
	unsigned int lenS2 = 0;
	unsigned int i = 0, j = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lenS1 = _strlen(s1);
	lenS2 = _strlen(s2);
	if (n >= lenS2)
	{
		n = lenS2;
	}
	ptr = malloc(sizeof(char) * (lenS1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	while (i < lenS1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		ptr[i++] = s2[j];
		j++;
	}
	return (ptr);
}
