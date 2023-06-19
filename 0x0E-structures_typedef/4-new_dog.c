#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: first param
 * @age: second param
 * @owner: third param
 *
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (new_dog->name == NULL)
		return (NULL);
	if (new_dog->owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = name;
	new_dog->owner = owner;
	new_dog->age = age;

	return (new_dog);
}
