#include "main.h"
#include <math.h>
#include <string.h>
#include <stdlib.h>
/**
 * binary_to_uint - converts a binary to ui;
 * @b: a binary number string
 * Return: An integer value
 */
unsigned int binary_to_uint(const char *b)
{
	int power = 0;
	int sum = 0, i, n;
	int len = strlen(b);

	if (b == NULL)
	{
		return (0);
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			sum += (int) pow(2, power);
		}
		power++;
		if (b[i] != '0' || b[i] != '1')
		{
			n = 1;
		}
	}
	if (n != 1)
	{
		return (0);
	}
	return (sum);
}
