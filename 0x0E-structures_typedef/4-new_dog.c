#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new struct
 * @name: dog's
 * @age: dog' age
 * @owner: dog's owner
 *
 * Return: a value
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
		return (NULL);
	doggy->name = malloc(strlen(name) + 1);
	doggy->owner = malloc(strlen(owner) + 1);
	strcpy(doggy->name, name);
	doggy->age = age;
	strcpy(doggy->owner, owner);
	return (doggy);
}
