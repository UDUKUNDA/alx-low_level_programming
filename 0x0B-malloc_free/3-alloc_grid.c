#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returning a pointer to a 2D array
 * @width: The size of row
 * @height: The size of column
 *
 * Return: a value
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
	if (arr[i] == NULL)
	{
	for (j = 0; j < i; j++)
	{
		free(arr[j]);
	}
	free(arr);
	return (NULL);
	}

	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
