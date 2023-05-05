#include "main.h"
/**
 * set_bit - gets the bit at a given index
 * @n: the given number
 * @index: the index to get the number from
 *
 * Return: A value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	bits = 1;
	bits <<= index;
	*n |= bits;
	return (1);
}

