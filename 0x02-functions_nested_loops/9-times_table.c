#include "main.h"
#include <stdio.h>

/**
 * times_table - this will print a timetables
 *
 * Return: nothing on success
 */

void times_table(void)
{
	int i, j, m, n, x;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j < 10; j++)
	{
		m = i * j;
	if (m > 9)
	{
		n = m % 10;
		x = (m - n) / 10;
		_putchar(44);
		_putchar(32);
		_putchar(x + '0');
		_putchar(n + '0');
	}
	else
	{
	if (j != 0)
	{
		_putchar(44);
		_putchar(32);
		_putchar(32);
	}
	_putchar(m + '0');
	}
	}
	_putchar('\n');
	}
}
