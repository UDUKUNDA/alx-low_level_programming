#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the diagonalsum
 * @a: the array to process
 * @size: the size of the array
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int x = 0;
	int y = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		x = x + a[i];
	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
	{
		y += a[j];
	}
	printf("%d, %d\n", x, y);
}
