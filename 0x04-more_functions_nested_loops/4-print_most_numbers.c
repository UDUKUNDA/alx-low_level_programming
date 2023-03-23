#include "main.h"

/**
 * print_most_numbers - prints numbers not 2 an 4
 *
 * Returns: nothing on success
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
	}
	_putchar('\n');
}
