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
 * _strdup - returns a pointer
 * @s: parameter
 *
 * Return: char
 */
char *_strdup(char *s)
{
	int i, j = 0;
	char *ptr;

	if (s == NULL)
	{
		return (NULL);
	}

	i = _strlen(s);
	i = i + 1;
	ptr = malloc(i * sizeof(*ptr));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (j < i)
	{
		ptr[j] = *(s + j);
		j++;
	}
	return (ptr);

}
