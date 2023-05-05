#include "main.h"
/**
 * get_bit - gets the bit at a given index
 * @n: the given number
 * @index: the index to get the number from
 *
 * Return: A value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bits;
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	bits = (n >> index) & 1;
	return (bits);
}
