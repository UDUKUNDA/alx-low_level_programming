#ifndef MAIN_H
#define MAIN_H

#include "main.h"

/**
 * main - Entry point
 *_putchar - to print the character
 *
 * Return: Always 0 (Success).
 */


int main(void)
{
	char a[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(a[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
#endif
