#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: integer to be converted to binary
 * @index: position to set bit to 0
 *
 * Return: 1 if success or -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n & (~(1 << index));
	return (1);
}
