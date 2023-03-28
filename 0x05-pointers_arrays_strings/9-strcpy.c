#include "main.h"
#include <string.h>
/**
 * _strcpy - to copy a string in a destination
 * @dest: destination of a string
 * @src: the source
 *
 * Return: a value
 */
char *_strcpy(char *dest, char *src)
{
	char *str;

	str = strcpy(dest, src);
	return (str);
}
