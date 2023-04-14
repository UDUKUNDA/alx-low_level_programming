#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenantes them string
 * @s1: first string
 * @s2: second string
 * @n: size
 * Return: a pointer to a memory space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = strlen(s2);
	char *str;
	unsigned int len = strlen(s1);

	if (s1 == NULL || s2 == NULL)
	{
		s1 = " ";
		s2 = " ";
	}
	if (len1 >= n)
	{
		len1 = n;
	}
	str = malloc(sizeof(char) + len + len1 + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	strncpy(str, s1, len);
	strncpy(str + len, s2, len1);
	return (str);
	free(str);
}

