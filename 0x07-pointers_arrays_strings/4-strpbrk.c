#include "main.h"
#include <string.h>

/**
 * _strpbrk - returns a pointer to the char in str1 that matches str2
 * @s: the 1st str
 * @accept: 2nd str
 *
 * Return: a value
 */
char *_strpbrk(char *s, char *accept)
{
	char *str;

	str = strpbrk(s, accept);
	return (str);
}
