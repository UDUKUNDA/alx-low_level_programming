#include "main.h"
#include <stdio.h>
/**
 * print_array - to print array element
 * @a: an array of elements
 * @n: size of the array
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	if (a[i] != a[n - 1])
	{
		printf(",");
		printf(" ");
	}
	}
	printf("\n");
}
