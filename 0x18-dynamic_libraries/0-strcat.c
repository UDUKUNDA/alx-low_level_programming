#include "main.h"
#include <string.h>
/**
 * _strcat - to concatenate string
 * @dest: destination
 * @src: source
 * Return: a value
 */
char *_strcat(char *dest, char *src)
{
	char *str;

	str = strcat(dest, src);
	return (str);
}
