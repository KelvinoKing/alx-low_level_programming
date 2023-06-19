#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees dog memory
 * @d: pointer to memory
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
