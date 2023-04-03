#include "main.h"
#include <string.h>

/**
 * _memcpy - copies characters from memory area
 * @dest: the destination arg
 * @src: where the characters are from
 * @n: number of characters to copy
 *
 * Return: a value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
