#ifndef DOG_H
#define DOG_H
#define NULL ((void *)0)
/**
 * struct dog - a struct containing dogs details
 * @name: holds dog name
 * @age: holds dog age
 * @owner: holds owner's name
 *
 * Description: contains dog information
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*DOG_H*/
