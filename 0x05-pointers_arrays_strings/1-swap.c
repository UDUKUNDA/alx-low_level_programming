#include "main.h"

/**
 * swap_int - will swap the given numbers
 * @a: a pointer to var a
 * @b: a pointer to var b
 *
 * Return: nothing on success
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
