#include "main.h"
#include <math.h>
#include <string.h>
#include <stdlib.h>
int powers(int length);
/**
 * binary_to_uint - converts a binary to an unsigned integer;
 * @b: a binary number string
 * Return: an unsigned integer value
 */
unsigned int binary_to_uint(const char *b)
{
	int length1 = strlen(b), i;
	int length2 = length1, po, pd, y = 0;
	unsigned int summation = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; i < length1; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			y++;
		}
		po = powers(length2);
		pd = b[i] - '0';
		summation += po * pd;
		length2--;
	}
	if (y != 0)
	{
		return (0);
	}
	return (summation);
}
/**
 * powers - to give the powers of a binary number
 * @length: passed string length
 * Return: a value
 */
int powers(int length)
{
	int product =  1, i;

	for (i = length - 1; i > 0; i--)
	{
		if (i == 0)
		{
			product = 1;
		}
		else
		{
			product *= 2;
		}
	}
	return (product);
}
