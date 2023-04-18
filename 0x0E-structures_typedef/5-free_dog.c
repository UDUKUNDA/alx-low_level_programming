#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees dog
 * @d: a struct variable
 *
 * Return: not returning something;
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
