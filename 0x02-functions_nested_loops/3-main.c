#include "main.h"

/**
 * main - there to call a function
 *
 * Return: 0 on Success
 */

int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha('l');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
