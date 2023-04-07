#include "main.h"
#include <string.h>

int check_palindrome(char *s, int f, int l);
/**
 * check_palindrome - checks for a palindrome
 * @s: a string to check for
 * @f: first index
 * @l: last digit
 *
 * Return: a value
 */
int check_palindrome(char *s, int f, int l)
{
	if (f >= l)
	{
		return (1);
	}
	else if (s[l] == s[f])
	{
		return (check_palindrome(s, f + 1, l - 1));
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - checks the palindrome
 * @s: string to be passed
 *
 * Return: a value
 */
int is_palindrome(char *s)
{
	int len;

	len = strlen(s);
	if (len == 0 || len == 1)
	{
		return (1);
	}
	return (check_palindrome(s, 0, len - 1));
}
