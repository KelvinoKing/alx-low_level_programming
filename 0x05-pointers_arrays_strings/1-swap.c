#include "main.h"
/**
 * swap_int - Swaps two integers
 *
 * @a: First parameter
 * @b: Second parameter
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
