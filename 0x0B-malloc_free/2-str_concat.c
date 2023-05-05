#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings
 *
 * @s1: first string passed
 * @s2: second string passed to function
 *
 * Return: pointer to new string or Null incase of failure
 */
char *str_concat(char *s1, char *s2)
{
	char *newStr;
	int i = 0, j = 0;
	int length, k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	length = i + j;

	newStr = (char *) malloc(sizeof(char) * length + 1);
	if (newStr == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	newStr[k] = s1[k];

	j = 0;
	for (i = k; i < length; i++)
	{
		newStr[i] = s2[j];
		j++;
	}

	return (newStr);
}
