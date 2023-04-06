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
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return  (x * _pow_recursion(x, y - 1));
}

