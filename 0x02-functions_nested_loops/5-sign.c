#include "main.h"

/**
 * print_sign - this willprint the sign and value
 * @n: will passed to the function
 *
 * Return: a value on success
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
