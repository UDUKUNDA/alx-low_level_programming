#include "main.h"
#include <stdlib.h>
/**
 * flip_bits - flips the bits and returns thier count
 * @n: the first number
 * @m: the second number
 * Return:  a value
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;
	unsigned int x;

	x = n ^ m;
	while (x)
	{
		x = x & (x - 1);
		flip++;
	}
	return (flip);
}
