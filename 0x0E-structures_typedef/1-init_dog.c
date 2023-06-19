#include "dog.h"
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: pointer to the struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner of dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
