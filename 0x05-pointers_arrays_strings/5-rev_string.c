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
	int i = 0, len = 0;
	char c;

	while (s[i++])
	{
		len++;
	}
	for (i = len - 1; i >= len / 2; i--)
	{
		c = s[i];
		s[i] = s[len - 1 - i];
		s[len -1 - i] = c;
	}
}
