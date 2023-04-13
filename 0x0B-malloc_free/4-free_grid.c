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
	int i;

	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}
	free(grid);
}

