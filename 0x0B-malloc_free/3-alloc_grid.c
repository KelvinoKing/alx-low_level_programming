#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 *
 * @width: first param
 * @height: second param
 *
 * Return: NULL on failure, NULL if h & w is negative or 0
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int row, col;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **) malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width);
		if (grid[row] == NULL)
		{
			while (row >= 0)
			{
				free(grid[row]);
				row--;
			}

			free(grid);
			return (NULL);
		}

		for (col = 0; col < width; col++)
		{
			grid[row][col] = 0;
		}
	}

	return (grid);
}
