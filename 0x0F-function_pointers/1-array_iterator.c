#include "function_pointers.h"
/**
 * array_iterator - Executes a function given as a parameter on each
 * element of array
 *
 * @array: pointer to array
 * @size: size of array
 * @action: pointer of function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL || size == 0)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
