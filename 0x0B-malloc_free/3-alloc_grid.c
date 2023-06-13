#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of ints
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/*Allocate space for pointers to pointers of array*/
	ptr = malloc(sizeof(*ptr) * height);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	/*Allocate space to integers being pointed by specified pointer*/
	while (i < height)
	{
		j = 0;
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			free(ptr[i]);
			return (NULL);
		}

		/*Initialize array*/
		while (j < width)
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (ptr);
}
