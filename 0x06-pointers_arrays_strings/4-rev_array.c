#include "main.h"
/**
 * reverse_array - Reverses an array of integers
 *
 * @a: first param
 * @n: second param
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp, temp2;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[j - i];
		temp2 = a[i];
		a[i] = temp;
		a[j - i] = temp2;
	}
}
