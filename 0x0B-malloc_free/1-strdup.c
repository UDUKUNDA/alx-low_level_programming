#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - contain a copy of a an array of string
 * @str: the string
 * Return: a ponter to a character
 */
char *_strdup(char *str)
{
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}
	a = malloc(sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	a = strdup(str);
	return (a);
	free(a);
}
