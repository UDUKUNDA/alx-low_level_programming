#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - multiplies the argument
 * @argc: the count of the argument
 * @argv: a pointer to the array of the string passed
 * Return: a value
 */
int main(int argc, char **argv)
{
	int num1 = 0, i;
	int num2 = 0;
	int y;
	char *x;
	char res[20];

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		x = argv[i];
		while (*x != '\0')
		{
		if (!isdigit(*x))
		{
	       	_putchar('E');
                _putchar('r');
                _putchar('r');
                _putchar('o');
                _putchar('r');
                _putchar('\n');
                exit(98);
		}
		x++;
		}
		if (i == 1)
		{
			num1 = atoi(argv[i]);
		}
		else
		{
			num2 = atoi(argv[i]);
		}
	}
	y = num1 * num2;
	sprintf(res, "%d", y);
	for (i = 0; res[i] != '\0'; i++)
	{
		_putchar(res[i]);
	}
	_putchar('\n');
	return (0);
}
