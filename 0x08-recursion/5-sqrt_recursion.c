#include "main.h"
int sqtest(int x, int y);

/**
 * _sqrt_recursion - checks the square root
 * @n: passed number
 *
 * Return: a value
 */
int _sqrt_recursion(int n)
{
	return (sqtest(n, 1));
}

/**
 * sqtest - to find the square root
 * @x: argument
 * @y: argument
 * Return: a value
 */

int sqtest(int x, int y)
{
	int sroot = y * y;

	if (sroot > x)
		return (-1);
	if (sroot == x)
		return (y);
	return (sqtest(x, y + 1));
}
