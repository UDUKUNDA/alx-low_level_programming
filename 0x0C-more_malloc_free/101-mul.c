#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
void printy(int a);

/**
 * main - multiplies the argument
 * @argc: the count of the argument
 * @argv: a pointer to the array of the string passed
 * Return: a value
 */
int main(int argc, char **argv)
{
	int num1 = 0, i, num2 = 0, y;
	char *x;

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
			num1 = atoi(argv[i]);
		else
			num2 = atoi(argv[i]);
	}
	y = num1 * num2;
	printy(y);
	return (0);
}
/**
 * printy - prints result;
 * @a: a value
 *
 * Return: nothing
 */
void printy(int a)
{
	char b[20];
	int i;

	sprintf(b, "%d", a);
	for (i = 0; b[i] != '\0'; i++)
	{
		_putchar(b[i]);
	}
	_putchar('\n');
}
