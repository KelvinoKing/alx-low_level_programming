#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * using linear search algorithm
 *
 * @array: pointer to first element of array
 * @size: size of the array
 * @value: integer to be searched
 *
 * Return: index of value if found else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
