#include "main.h"
/**
 * flip_bits - Returns the number of bits you would need to flip to get from
 * one number to another
 * @n: number to be checked
 * @m: second param
 *
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits = 0;
	unsigned int diff_in_bits;

	diff_in_bits = n ^ m;

	while (diff_in_bits)
	{
		num_bits += (diff_in_bits & 1);
		diff_in_bits = diff_in_bits >> 1;
	}
	return (num_bits);
}
