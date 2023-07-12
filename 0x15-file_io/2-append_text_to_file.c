#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * append_text_to_file - appends a text to an existing
 * @filename: This is the param1
 * @text_content: the param2
 * Return: a value
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f1;
	ssize_t s;
	int t = strlen(text_content);

	if (filename == NULL)
	{
		return (-1);
	}
	f1 = open(filename, O_WRONLY | O_APPEND);
	if (f1 == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		s = write(f1, text_content, t);
		if (s == -1)
		{
			close(f1);
			return (-1);
		}
	}
	if (close(f1) == -1)
	{
		return (-1);
	}
	return (1);
}
