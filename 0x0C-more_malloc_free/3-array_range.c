#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - This will create an array of integers
 * @min: Starting point
 * @max: Ending point
 * Return: a pointer to the array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}



