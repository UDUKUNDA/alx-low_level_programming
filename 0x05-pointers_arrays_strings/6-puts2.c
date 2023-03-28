#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints the other character of a string
 * @str: argument to be passed
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int c = 0;
	int n;

	while (str[c] != '\0')
	{
		c = c + 1;
	}
	for (n = 0; n < c; n = n + 2)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
