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
	int m;

	for (n = 0; n < 9; n++)
	{
	for (m = n + 1; m < 10; m++)
	{
		putchar((n % 10) + '0');
		putchar((m % 10) + '0');
	if (n == 8 && m == 9)
	{
		continue;
	}
		putchar(',');
		putchar(' ');
	}
	}
		putchar('\n');
	return (0);
}
