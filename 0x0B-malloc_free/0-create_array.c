#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array and initializes it
 *
 * @size: size of array
 * @c: character to use to initialize array
 *
 * Return: pointer to the array if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = (char *) malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
