#include "dog.h"
/**
 * init_dog - This will initialise a struct
 * @d: the structure
 * @name: the dog's name
 * @age: its age
 * @owner: its owner
 *
 * Return: nothing;
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
