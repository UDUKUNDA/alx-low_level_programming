#include "main.h"

/**
 * print_square - to print a square
 * @size: a passed argument
 *
 * Return: nothing on success
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
		_putchar('#');
	}
	_putchar('\n');
	}
}
