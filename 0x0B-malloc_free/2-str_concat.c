#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatenantes string
 * @s1: string one
 * @s2: string two
 *
 * Returns: a pointer to a string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	str = malloc(strlen(s1) + strlen(s2) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	strcpy(str, s1);
	strcat(str, s2);
	return (str);
	free(str);
}



