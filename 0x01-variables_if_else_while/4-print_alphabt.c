#include <stdio.h>

/**
 * main - Entry point of  a program
 * conditional statements - If...else
 * putchar - Prints the character to the std output
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if ((alph != 'e' && alph != 'q'))
		{
			putchar(alph);
		}
	}
			putchar('\n');
	return (0);
}
