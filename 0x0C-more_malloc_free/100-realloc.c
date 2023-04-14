#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates a block of memoery
 * @ptr: a pointer to an old array
 * @old_size: this is the size of the already allocated memory
 * @new_size: the new size of memory
 * Return: nothing;
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (ptr == NULL)
	{
		return (new_ptr);
	}
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	memcpy(new_ptr, ptr, (old_size < new_size) ? old_size : new_size);
	free(ptr);
	return (new_ptr);
}
