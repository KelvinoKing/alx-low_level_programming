#include "main.h"
/**
 * print_square - Prints a square
 *
 * @size: function parameter
 *
 * Return: void
 */
void print_square(int size)
{
	int row = size;
	int col = size;
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
