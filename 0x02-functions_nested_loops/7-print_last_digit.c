#include "main.h"

/**
 * print_last_digit - pirnts the last digit
 *@n:  type of a parameter
 *
 * Return: a value on success
 */
int print_last_digit(int n)
{
	int ldigit;
	
	ldigit = n % 10;
	if (ldigit < 0)
	{
		ldigit = ldigit * -1;
	}
       	_putchar(ldigit + '0');
	return (ldigit);
}
