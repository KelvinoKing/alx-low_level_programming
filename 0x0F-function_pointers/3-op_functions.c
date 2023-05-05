#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - Returns the sum of a and b
 *
 * @a: first param
 * @b: second param
 *
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the diff of a and b
 * @a: first param
 * @b: second param
 *
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of a & b
 * @a: first param
 * @b: second param
 *
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of a & b
 * @a: first param
 * @b: second param
 *
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Returns the remainder of a & b
 * @a: first param
 * @b: second param
 *
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
