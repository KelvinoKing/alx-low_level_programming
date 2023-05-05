#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * storeCpy - stores a copy of name and owner
 *
 * @str: parameter
 *
 * Return: pointer to new memory containing copies
 */
char *storeCpy(char *str)
{
	int i = 0;
	int j;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	ptr = malloc(sizeof(char) * i + 1);
	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		ptr[j] = str[j];
	ptr[j] = '\0';

	return (ptr);
}
/**
 * new_dog - Creates a new dog
 *
 * @name: first param
 * @age: second param
 * @owner: third param
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogNew;
	char *nameCpy, *ownerCpy;

	dogNew = malloc(sizeof(dog_t));
	if (dogNew == NULL)
		return (NULL);

	nameCpy = storeCpy(name);
	if (nameCpy == NULL)
	{
		free(dogNew);
		return (NULL);
	}

	ownerCpy = storeCpy(owner);
	if (ownerCpy == NULL)
	{
		free(dogNew);
		free(nameCpy);
		return (NULL);
	}

	dogNew->name = nameCpy;
	dogNew->age = age;
	dogNew->owner = ownerCpy;

	return (dogNew);
}
