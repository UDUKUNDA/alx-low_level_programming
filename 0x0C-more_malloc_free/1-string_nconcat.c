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
	unsigned int len;
	char *str;
	unsigned int len1;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = " ";
		s2 = " ";
	}
	len = strlen(s1);
	len1 = strlen(s2);
	if (len1 >= n)
	{
		len1 = n;
	}
	str = malloc(len + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	strncpy(str, s1, len);
	strncpy(str + len, s2, len1);
	str[len + n] = '\0';
	return (str);
	free(str);
}

