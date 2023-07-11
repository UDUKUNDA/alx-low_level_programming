 #include "main.h"
/**
 * print_binary - this will give a binary number
 * @n: n will be a parameter
 * Developer - Eesyle UDUKUNDA
 * Return: I will not return a value
 */
void print_binary(unsigned long int n)
{
	unsigned long int a = 1;
	int x;

	while ((a << 1) <= n)
	{
		a <<= 1;
	}
	while (a > 0)
	{
		x =  (n & a) ? 1 : 0;
		_putchar(x + '0');
		a >>= 1;
	}
}
