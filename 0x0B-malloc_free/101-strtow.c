#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtow - splits the string into words
 * @str: a passed string
 *
 * Return: a value
 */
char **strtow(char *str)
{
	int i = 0;
	int num_words = 0;
	char *p = str;
	int len;
	char **words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	while (*p)
	{
		while (*p && (*p == ' '))
		{
			p++;
		}
		if (*p)
		{
			num_words++;
			while (*p && (*p != ' '))
			{
				p++;
			}
		}
	}
	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	p = str;
	while (*p)
	{
		while (*p && (*p == ' '))
		{
			p++;
		}
		if (*p)
		{
			char *start = p;

			while (*p && (*p != ' '))
			{
				p++;
			}
			len = p - start;
			words[i] = malloc((len + 1) * sizeof(char));
			if (words[i] == NULL)
			{
		while (i > 0)
		{
			free(words[--i]);
		}
		free(words);
		return (NULL);
	}
	strncpy(words[i], start, len);
	words[i][len] = '\0';
	i++;
		}
	}
	words[num_words] = (NULL);
	return (words);
}
