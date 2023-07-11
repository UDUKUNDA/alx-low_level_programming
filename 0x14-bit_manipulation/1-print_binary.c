#include "main.h"
/**
 * print_binary - prints a binary number
 * @n: passed argument
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 1;
	int x;

	while ((i << 1) <= n)
	{
		i <<= 1;
	}
	while (i > 0)
	{
		x =  (n & i) ? 1 : 0;
		_putchar(x + '0');
		i >>= 1;
	}
}
