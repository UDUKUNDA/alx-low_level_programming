#include <stdio.h>
/**
 * main - Entry point
 * putchar - Prints the characters on the screen
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
		putchar('\n');
	return (0);
}
