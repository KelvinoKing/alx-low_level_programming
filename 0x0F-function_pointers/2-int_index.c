#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0, i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	while (i < size)
	{
		index = cmp(array[i]);
		if (index != 0)
			return (i);
		i++;
	}
	return (-1);
}
