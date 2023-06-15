#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers
 * @min: minmum element of array
 * @max: maximum element of array
 *
 * Return: ponter
 */
int *array_range(int min, int max)
{
	int diff, i = 0;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	diff = (max - min) + 1;
	ptr = malloc(sizeof(*ptr) * diff);
	if (ptr == NULL)
	{
		return (NULL);
	}

	while (i < diff)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
