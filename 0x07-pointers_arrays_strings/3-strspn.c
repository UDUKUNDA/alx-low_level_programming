#include "main.h"
#include <string.h>

/**
 * _strspn - returns the length of part of str1 in str2
 * @s: 1st string
 * @accept: 2nd string
 *
 * Return: a value
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x;

	x = strspn(s, accept);
	return (x);
}
