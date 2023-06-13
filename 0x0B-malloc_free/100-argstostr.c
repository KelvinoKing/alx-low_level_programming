#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
 * argstostr - concatenates all the arguments of your program
 * @ac: number of argumets
 * @av: array of arguments
 *
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i = 0, j = 0, k = 0, totalLen = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	while (i < ac)
	{
		totalLen += _strlen(av[i]) + 1;
		i++;
	}

	ptr = malloc(totalLen * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (j < ac)
	{
		i = 0;
		str = av[j];
		while (i < _strlen(str))
		{
			ptr[k] = str[i];
			i++;
			k++;
		}
		ptr[k++] = '\n';
		j++;
	}
	return (ptr);
}
