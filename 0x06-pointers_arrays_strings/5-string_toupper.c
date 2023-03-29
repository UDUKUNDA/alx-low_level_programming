#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * string_toupper - converts string to uppercase
 * @str: char type parametrr
 * Return: a value
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if (str[i] > 'a' && str[i] > 'z')
	{
		str[i] = str[i] - 32;
	}
	i++;
	}
	return (str);
}
