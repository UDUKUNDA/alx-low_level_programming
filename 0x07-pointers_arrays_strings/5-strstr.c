#include "main.h"
#include <string.h>

/**
 * _strstr - returns a pointer to a substr of str1 in from str2
 * @haystack: 1st str
 * @needle: 2nd str
 *
 * Return: a value
 */
char *_strstr(char *haystack, char *needle)
{
	char *x;

	x = strstr(haystack, needle);
	return (x);
}
