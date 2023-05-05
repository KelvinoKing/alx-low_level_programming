#include "main.h"
#include <stdlib.h>
/**
 * strlength - returns length of a string
 *
 * @str: string argument
 *
 * Return: int
 */
int strlength(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * argstostr - Concatenates all the arguments of programe
 *
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int length_str = 0;
	int i;
	int j;
	int k = 0;
	char *newStr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		length_str += strlength(av[i]) + 1;

	newStr = malloc(sizeof(char) * length_str + 1);
	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlength(av[i]); j++)
		{
			newStr[k] = av[i][j];
			k++;
		}
		newStr[k] = '\n';
		k++;
	}

	return (newStr);
}
