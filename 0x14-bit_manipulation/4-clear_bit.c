#include "main.h"
/**
 * clear_bit - gets the bit at a given index
 * @n: the given number
 * @index: the index to get the number from
 *
 * Return: A value
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int nbits;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	nbits = 1;
	nbits <<= index;
	nbits = ~nbits;
	*n &= nbits;
	return (1);
}
