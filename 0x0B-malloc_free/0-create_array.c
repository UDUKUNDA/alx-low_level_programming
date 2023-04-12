#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array -this creates array of characters
 * @size: the size of array
 * @c: the character to initialize
 * Return: a value
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	arr[i] = c;
	}
	return (arr);
	free(arr);
}

