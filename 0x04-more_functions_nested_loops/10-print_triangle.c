#include "main.h"
/**
 * print_triangle - prints a triangle followed by new line
 *
 * @size: function parameter
 *
 * Return: void
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int space = size - 1;
		int i, j, k, p;

		for (i = 0; i < size; i++)
		{
			k = size - space;
			p = 0;
			for (j = space; j > 0; j--)
			{
				_putchar(' ');
			}
			space--;

			while (p < k)
			{
				_putchar('#');
				p++;
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
