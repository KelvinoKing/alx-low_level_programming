#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: size of space to be allocated
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
