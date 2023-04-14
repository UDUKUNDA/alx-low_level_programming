#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates the memory
 * @b: passed argument
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}
	return (s);
	free(s);
}
