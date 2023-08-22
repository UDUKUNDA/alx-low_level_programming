#include "main.h"
#include <string.h>

/**
 * _strchr - it returns the pointer to the 1st occurence of a char
 * @s: to be scanned
 * @c: the character to look for
 * Return: a value
 */
char *_strchr(char *s, char c)
{
	char *str;

	str = strchr(s, c);
	return (str);
}

