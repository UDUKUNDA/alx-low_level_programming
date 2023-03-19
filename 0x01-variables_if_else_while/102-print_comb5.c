#include <stdio.h>

/**
 * main - Entry point
 * putchar - Prints the output to std output
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;
	int o;

	for (m = 0; m <= 98; m++)
	{
	for (o = m + 1; o <=  99; o++)
	{
		putchar((m / 10) + '0');
		putchar((m % 10) + '0');
		putchar(' ');
		putchar((o / 10) + '0');
		putchar((o % 10) + '0');
	if (m == 98 && o == 99)
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
