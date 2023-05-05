#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 *
 * @str: pointer to string passed in function
 *
 * Return: NULL is string passed is empty or insufficient memory was available
 */
char *_strdup(char *str)
{
	char *strNew;
	int i = 0;
	int j;

	if (str == 0)
		return (NULL);

	while (str[i] != '\0')
		i++;

	strNew = (char *) malloc(sizeof(char) * i + 1);

	if (strNew == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		strNew[j] = str[j];

	return (strNew);
}
