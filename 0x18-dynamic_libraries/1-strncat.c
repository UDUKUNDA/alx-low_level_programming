#include "main.h"
#include <string.h>

/**
 * _strncat - concats a number of str
 * @dest: destination
 * @src: source
 * @n: number of char
 *
 * Return: a value
 */

char *_strncat(char *dest, char *src, int n)
{
	char *str;

	str = strncat(dest, src, n);
	return (str);
}
