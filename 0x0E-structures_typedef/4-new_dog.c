#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - Returns the length of a string
 *
 * @s: Function parameter
 *
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;
	int count = 0;

	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}

	return (count);
}

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
	int i = 0, j = 0;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->age = age;
	new_dog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	while (i < _strlen(name))
	{
		new_dog->name[i] = name[i];
		i++;
	}
	new_dog->name[i++] = '\0';
	while (j < _strlen(owner))
	{
		new_dog->owner[j] = owner[j];
		j++;
	}
	new_dog->name[j++] = '\0';

	return (new_dog);
}
