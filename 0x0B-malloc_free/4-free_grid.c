#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees the space of allocated memory
 * @grid: an array to passed
 * @height: the size of rows
 *
 * Return: a value
 */
void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
		}
	}
}

