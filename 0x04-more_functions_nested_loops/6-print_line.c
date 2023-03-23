#include "main.h"

/**
  * print_line - this function prints the the line
  * @n: a passed argument
  *
  * Return: nothing upon sucess
  */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
		if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}

