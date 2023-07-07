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
	unsigned long int num = n;
	unsigned int num_divided = 0, i = 0;
	int *ptr;

	while (n / 2 > 0)
	{
		n /= 2;
		num_divided++;
	}
	num_divided += 1;
	ptr = malloc(num_divided * sizeof(int));
	if (ptr == NULL)
		return (-1);
	while (i < num_divided)
	{
		ptr[i] = num % 2;
		num /= 2;
		i++;
	}
	if (index > num_divided)
		return (-1);
	return (ptr[index]);
}
