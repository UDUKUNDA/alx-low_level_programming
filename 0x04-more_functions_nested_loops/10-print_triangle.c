#include "main.h"

/**
 * print_triangle - to print a triangle
 * @size: passed argument
 *
 * Return: nothing upon success
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
	for (k = size - 1; k >= i; k--)
	{
		_putchar(' ');
	}
	for (j = 1; j <= i; j++)
	{
		_putchar('#');
	}
	_putchar('\n');
	}
}
