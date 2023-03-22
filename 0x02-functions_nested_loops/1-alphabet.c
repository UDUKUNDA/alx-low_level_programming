#include "main.h"

/**
 * main - Entry point
 * _puchar - to print a character
 * print_alphabet - This function will print alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - displays alphabet in lowercase
 *
 * Return: nothing (Success)
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

