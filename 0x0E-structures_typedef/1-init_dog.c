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
	struct dog *my_dog;

	my_dog = d;
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
}
