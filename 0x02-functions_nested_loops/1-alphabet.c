#include "main.h"

/**
 * print_alphabet - This function will print alphabets in lowercase
 *
 * Return: nothing  (Success)
 */


void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

