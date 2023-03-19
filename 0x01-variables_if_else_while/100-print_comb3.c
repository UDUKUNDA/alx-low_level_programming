#include <stdio.h>

/**
 * main - Entry point
 * putcahr - Prints the char on std outp
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 1; n < 90; n++)
	{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
	if (n != 89)
	{
		putchar(',');
		putchar(' ');
	}
	}
		putchar('\n');
	return (0);
}
