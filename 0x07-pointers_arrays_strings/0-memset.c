#include "main.h"
#include <string.h>
/**
 * _memset - to fill the memoery with the value
 * @s: the address to start with
 * @b: the value to feel
 * @n: number of bytes to add
 *
 * Return: a value upon success
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (0);
}
