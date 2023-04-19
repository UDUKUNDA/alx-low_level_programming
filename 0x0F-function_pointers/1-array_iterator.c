#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - iterates an array
 * @array: a passed array
 * @size: the size of array
 * @action: a function to execute
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	if (array != NULL || action == NULL)
	{
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
	}
}
