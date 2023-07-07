#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index
 * @n: value to be conv to binary
 * @index: specified location of bit
 *
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
		return (-1);
	return ((n >> index) & 1);
}
