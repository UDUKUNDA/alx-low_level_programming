#include "main.h"
/**
 * get_bit - now this will show the bits at a given index
 * @n:  a passed parameer
 * @index:  a parsmeter too
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
