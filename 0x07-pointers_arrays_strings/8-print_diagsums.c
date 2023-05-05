#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints sum of the two diagonals of a square matrix
 *
 * @a: fisrt parameter
 * @size: second parameter
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int macDiagSum = 0;
	int micDiagSum = 0;

	for (i = 0; i < size; i++)
	{
		macDiagSum += *(a + (size * i) + i);
		micDiagSum += *(a + (size * i) + (size - 1) - i);
	}

	printf("%d, %d\n", macDiagSum, micDiagSum);
}
