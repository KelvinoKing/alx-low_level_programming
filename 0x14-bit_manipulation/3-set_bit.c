#include "main.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: pointer to integer
 * @index: position to be set
 *
 * Return: 1 on success or -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
