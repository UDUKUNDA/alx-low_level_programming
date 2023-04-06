#include "main.h"
#include <math.h>
/**
 * _pow_recursion - print the power of a value
 * @x: value of x
 * @y: the power of x
 * Return: a value
 */
int _pow_recursion(int x, int y)
{
	int n;

	if (y < 0)
	{
		return (-1);
	}
	return (n = pow(x, y));
}

