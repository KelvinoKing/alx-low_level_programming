#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - Searches for an integer
 *
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp == NULL || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
			return (i);
	}

	return (-1);
}
