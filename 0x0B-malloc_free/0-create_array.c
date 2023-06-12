#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array and initializes it
 * @size: size of array
 * @c: characted to be used in initializing
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * sizeof(*ptr));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < size)
		{
			ptr[i] = c;
			i++;
		}
	}
	return (ptr);
}
