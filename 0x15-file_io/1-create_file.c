#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
/**
 * create_file - this makes a file
 * @filename: the param 2
 * @text_content: The param 2
 * Return: a value
 */
int create_file(const char *filename, char *text_content)
{
	int fp, t, l;

	if (filename == NULL)
	{
		return (0);
	}
	fp = open(filename, O_CREAT | O_EXCL | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fp == -1)
	{
		if (errno == EEXIST)
		{
			fp = open(filename, O_WRONLY, S_IWUSR);
			if (fp == -1)
			{
				return (-1);
			}
		}
	}
	else
	{
		return (1);
	}
	if (text_content != NULL)
	{
		l = strlen(text_content);
		t = write(fp, text_content, l);
		if (t == -1 || t != l)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
