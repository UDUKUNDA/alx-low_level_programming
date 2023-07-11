#include "main.h"
#include <math.h>
#include <string.h>
#include <stdlib.h>
int power(int len);
/**
 * binary_to_uint - converts a binary to ui;
 * @b: a binary number string
 * Return: An integer value
 */
unsigned int binary_to_uint(const char *b)
{
	int len1 = strlen(b), i;
	int len2 = len1, po, pd, x = 0;
	unsigned int sum = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; i < len1; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			x++;
		}
		po = power(len2);
		pd = b[i] - '0';
		sum += po * pd;
		len2--;
	}
	if (x != 0)
	{
		return (0);
	}
	return (sum);
}
/**
 * power - to give the powers of a binary number
 * @len: passed string length
 * Return: a value
 */
int power(int len)
{
	int prod =  1, i;

	for (i = len - 1; i > 0; i--)
	{
		if (i == 0)
		{
			prod = 1;
		}
		else
		{
			prod *= 2;
		}
	}
	return (prod);
}
