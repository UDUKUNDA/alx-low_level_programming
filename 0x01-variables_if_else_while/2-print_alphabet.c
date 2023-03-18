#include <stdio.h>

/**
 * main - Entry point function
 * putchar - Prints a character on std output
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
		putchar('\n');
	return (0);
}
