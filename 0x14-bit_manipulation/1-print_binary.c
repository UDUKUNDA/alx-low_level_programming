#include "main.h"
/**
 * print_binary - prints a binary number
 * @n: passed argument
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 1;

	while ((i << 1) <= n)
	{
		i <<= 1;
	}
	while (i > 0)
	{
		if (n & i)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		i >>= 1;
	}
	_putchar('\n');
}
