#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memo for ana array
 * @nmemb: the n element
 * @size: the size of the bits
 * Return: a pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	str = malloc(nmemb * size);
	if (str == NULL)
	{
		return (NULL);
	}
	return (str);
	free(str);
}
