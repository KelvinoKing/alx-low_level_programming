#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers
 *
 * @min: minimum value of elements in array
 * @max: maximum value of elements in array
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int nmemb, i;
	int *ptr;

	if (min > max)
		return (NULL);

	nmemb = (max - min) + 1;
	ptr = malloc(sizeof(int) * nmemb);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
