#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _atoi - converts the string to integer
 * @s: passed argument
 * Return: a value
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int x = 0;
	int y = 1;
	int z = 0;

	while (s[c])
	{
	if (s[c] == 45)
	{
		y *= -1;
	}
	while (s[c] >= 48 && s[c] <= 57)
	{
		z = 1;
		x = (x * 10) + (s[c] - '0');
	c++;
	}
	if (z == 1)
	{
		break;
	}
	c++;
	}
	x *= y;
	return (x);
}
