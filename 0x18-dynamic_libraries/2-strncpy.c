#include "main.h"
#include <string.h>

/**
 * _strncpy - will copy part of the str
 * @dest: destination
 * @src: source
 * @n: number of chars
 * Return: a value
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *str;

	str = strncpy(dest, src, n);
	return (str);
}
