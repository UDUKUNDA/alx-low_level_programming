#include <stdio.h>

/**
 * main - Entry point
 * putchar - To print characters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;
	int o;

	for (n = 0; n < 9; n++)
	{
	for (m = n + 1; m < 10; m++)
	{
	for (o = m + 1;  o < 10; o++)
	{
		putchar((n % 10) + '0');
		putchar((m % 10) + '0');
		putchar((o % 10) + '0');
	if (n == 7 && m == 8 && o == 9)
	{
		continue;
	}
		putchar(',');
		putchar(' ');
	}
	}
	}
		putchar('\n');
	return (0);
}
