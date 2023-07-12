#include "main.h"
#include <stdlib.h>
/**
 * flip_bits - flips the bits and returns thier count
 * @n: para 1
 * @m: para 2
 * Return:  a value
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flipIt = 0;
	unsigned int x;

	x = n ^ m;
	while (x)
	{
		x = x & (x - 1);
		flipIt++;
	}
	return (flipIt);
}
