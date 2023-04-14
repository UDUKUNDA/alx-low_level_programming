#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates a memory
 * @b: a passed argument
 * Return: a pointer to a memory
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
	{
		exit(98);
	}
	return (x);
	free(x);
}
