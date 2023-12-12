#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * binary search algorith
 *
 * @array: pointer to array
 * @size: size of array
 * @value: integer to be found
 *
 * Return: index of value else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t L = 0, J;
	size_t R = size - 1;
	size_t m;

	if (array == NULL)
		return (-1);

	while (L <= R)
	{
		J = L;
		printf("Searching in array: ");
		while (J <= R)
		{
			if (J < R)
				printf("%d, ", array[J]);
			else
				printf("%d\n", array[J]);
			J++;
		}
		m = (L + R) / 2;

		if (array[m] < value)
		{
			L = m + 1;
		}
		else if (array[m] > value)
		{
			R = m - 1;
		}
		else
			return (m);
	}
	return (-1);
}
