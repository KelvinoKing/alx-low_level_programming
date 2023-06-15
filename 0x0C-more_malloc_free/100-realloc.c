#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to old block of memory
 * @old_size: size of old memory block
 * @new_size: size of new memory block
 *
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old_mem;
	char *ptr_new;
	unsigned int i = 0;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size > old_size)
	{
		return (malloc(new_size));
	}

	ptr_new = malloc(new_size);
	if (ptr_new == NULL)
		return (NULL);

	old_mem = ptr;
	if (new_size < old_size)
	{
		while (i < new_size)
		{
			ptr_new[i] = old_mem[i];
			i++;
		}
	}
	free(ptr);
	return (ptr_new);
}
