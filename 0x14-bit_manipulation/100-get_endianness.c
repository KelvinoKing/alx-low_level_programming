#include "main.h"
/**
 * get_endianness - Checks the endianness of a machine
 *
 * Return: int
 */
int get_endianness(void)
{
	unsigned int kelvino = 1;
	char *c = (char *) &kelvino;

	return ((int)*c);
}
