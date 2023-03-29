#include "main.h"

/**
 * print_number - print the integer
 * @n: is the agument passed
 *
 * Return: nothing upon succes
 */

void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		n = n * -1;
		m = n;
		_putchar('-');
	}
	m = m / 10;
	if (m != 0)
		print_number(m);
	_putchar((unsigned int) n % 10 + '0');
}
