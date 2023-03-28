#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverses the string
 * @s: a passeg argumrnt
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	putchar('\n');
}
