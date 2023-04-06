#include "main.h"
/**
 * factorial - to print the factorial
 * @n: the number passed
 *
 * Return: a value
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
