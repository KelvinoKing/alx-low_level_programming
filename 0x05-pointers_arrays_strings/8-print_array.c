#include <stdio.h>
#include "main.h"
/**
 * print_array - Prints n elements of an array
 *
 * @a: first argument
 * @n: second argument
 *
 * Result: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i == (n - 1))
			{
				printf("%d\n", a[i]);
			}
			else
			{
				printf("%d, ", a[i]);
			}
		}
	}
	else
		printf("\n");
}
