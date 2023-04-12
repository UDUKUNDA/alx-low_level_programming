#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - cancates a  string
 * @s1: string one
 * @s2: string two
 *
 * Return: a pointer to a string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;

	str = malloc(strlen(s1) + strlen(s2) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		strcpy(str, " ");
		strcat(str, s2);
	}
	else if (s2 == NULL)
	{
		strcpy(str, s1);
		strcat(str, " ");
	}
	else if (s1 == NULL && s2 == NULL)
	{
		strcpy(str, " ");
		strcat(str, " ");
	}
	else
	{
	strcpy(str, s1);
	strcat(str, s2);
	}
	return (str);
	free(str);
}
